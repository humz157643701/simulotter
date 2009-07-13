#include <GL/freeglut.h>

#include "galipeur.h"

const btScalar Galipeur::height  = scale(0.200);
const btScalar Galipeur::side    = scale(0.110);
const btScalar Galipeur::r_wheel = scale(0.025);
const btScalar Galipeur::h_wheel = scale(0.020);

const btScalar Galipeur::d_side  = ( side + 2*r_wheel ) / btSqrt(3);
const btScalar Galipeur::d_wheel = ( r_wheel + 2*side ) / btSqrt(3);
const btScalar Galipeur::a_side  = 2*btAtan2( side,    d_side  );
const btScalar Galipeur::a_wheel = 2*btAtan2( r_wheel, d_wheel );
const btScalar Galipeur::radius  = btSqrt(side*side+d_side*d_side);

SmartPtr<btCompoundShape> Galipeur::shape;
btConvexHullShape Galipeur::body_shape;
btBoxShape Galipeur::wheel_shape( btVector3(h_wheel/2,r_wheel,r_wheel) );
GLuint Galipeur::dl_id_static = 0;


Galipeur::Galipeur(btScalar m)
{
  // First instance: initialize shape
  if( shape == NULL )
  {
    shape = new btCompoundShape();
    // Triangular body
    if( body_shape.getNumPoints() == 0 )
    {
      btVector2 p = btVector2(radius,0).rotated(-a_wheel/2);
      for( int i=0; i<3; i++ )
      {
        body_shape.addPoint( btVector3(p.x,p.y,+height/2) );
        body_shape.addPoint( btVector3(p.x,p.y,-height/2) );
        p.rotate(a_wheel);
        body_shape.addPoint( btVector3(p.x,p.y,+height/2) );
        body_shape.addPoint( btVector3(p.x,p.y,-height/2) );
        p.rotate(a_side);
      }
    }
    shape->addChildShape(btTransform::getIdentity(), &body_shape);

    // Wheels (use boxes instead of cylinders)
    btTransform tr = btTransform::getIdentity();
    btVector2 vw( d_wheel+h_wheel/2, 0 );
    tr.setOrigin( btVector3(vw.x, vw.y, -(height/2 - r_wheel)) );
    shape->addChildShape(tr, &wheel_shape);

    vw.rotate(2*M_PI/3);
    tr.setOrigin( btVector3(vw.x, vw.y, -(height/2 - r_wheel)) );
    tr.setRotation( btQuaternion(btVector3(0,0,1), 2*M_PI/3) );
    shape->addChildShape(tr, &wheel_shape);

    vw.rotate(-4*M_PI/3);
    tr.setOrigin( btVector3(vw.x, vw.y, -(height/2 - r_wheel)) );
    tr.setRotation( btQuaternion(btVector3(0,0,1), -2*M_PI/3) );
    shape->addChildShape(tr, &wheel_shape);
  }

  btVector3 inertia;
  shape->calculateLocalInertia(m, inertia);
  this->body = new btRigidBody(
      btRigidBody::btRigidBodyConstructionInfo(m,NULL,shape,inertia)
      );
  SmartPtr_add_ref(shape);

  // Init order
  this->order = ORDER_NONE;
}

Galipeur::~Galipeur()
{
}

void Galipeur::addToWorld(Physics *physics)
{
  physics->getWorld()->addRigidBody(body);
  Robot::addToWorld(physics);
}

void Galipeur::draw()
{
  // Use a darker color to contrast with game elements
  glColor4fv(match->getColor(getTeam()) * 0.5);

  glPushMatrix();
  drawTransform(body->getCenterOfMassTransform());

  if( dl_id_static != 0 )
    glCallList(dl_id_static);
  else
  {
    // new display list
    dl_id_static = glGenLists(1);
    glNewList(dl_id_static, GL_COMPILE_AND_EXECUTE);

    btglTranslate(0, 0, -height/2);

    glPushMatrix();

    btglScale(radius, radius, height);
    btVector2 v;

    // Faces

    glBegin(GL_QUADS);

    v = btVector2(1,0).rotated(-a_wheel/2);
    btVector2 n(1,0); // normal vector
    for( int i=0; i<3; i++ )
    {
      // wheel side
      btglNormal3(n.x, n.y, 0.0);
      n.rotate(M_PI/3);

      btglVertex3(v.x, v.y, 0.0);
      btglVertex3(v.x, v.y, 1.0);
      v.rotate(a_wheel);
      btglVertex3(v.x, v.y, 1.0);
      btglVertex3(v.x, v.y, 0.0);

      // triangle side
      btglNormal3(n.x, n.y, 0.0);
      n.rotate(M_PI/3);

      btglVertex3(v.x, v.y, 0.0);
      btglVertex3(v.x, v.y, 1.0);
      v.rotate(a_side);
      btglVertex3(v.x, v.y, 1.0);
      btglVertex3(v.x, v.y, 0.0);
    }

    glEnd();

    // Bottom
    glBegin(GL_POLYGON);
    btglNormal3(0.0, 0.0, -1.0);
    v = btVector2(1,0).rotated(-a_wheel/2);
    for( int i=0; i<3; i++ )
    {
      btglVertex3(v.x, v.y, 0.0);
      v.rotate(a_wheel);
      btglVertex3(v.x, v.y, 0.0);
      v.rotate(a_side);
    }
    glEnd();

    // Top
    glBegin(GL_POLYGON);
    btglNormal3(0.0, 0.0, 1.0);
    v = btVector2(1,0).rotated(-a_wheel/2);
    for( int i=0; i<3; i++ )
    {
      btglVertex3(v.x, v.y, 1.0);
      v.rotate(a_wheel);
      btglVertex3(v.x, v.y, 1.0);
      v.rotate(a_side);
    }
    glEnd();

    glPopMatrix();

    // Wheels (box shapes, but drawn using cylinders)
    btglTranslate(0, 0, r_wheel);
    btglRotate(90.0f, 0.0f, 1.0f, 0.0f);
    btVector2 vw( d_wheel, 0 );

    glPushMatrix();
    btglTranslate(0, vw.y, vw.x);
    glutSolidCylinder(r_wheel, h_wheel, cfg->draw_div, cfg->draw_div);
    glPopMatrix();

    glPushMatrix();
    vw.rotate(2*M_PI/3);
    btglTranslate(0, vw.y, vw.x);
    btglRotate(-120.0f, 1.0f, 0.0f, 0.0f);
    glutSolidCylinder(r_wheel, h_wheel, cfg->draw_div, cfg->draw_div);
    glPopMatrix();

    glPushMatrix();
    vw.rotate(-4*M_PI/3);
    btglTranslate(0, vw.y, vw.x);
    btglRotate(120.0f, 1.0f, 0.0f, 0.0f);
    glutSolidCylinder(r_wheel, h_wheel, cfg->draw_div, cfg->draw_div);
    glPopMatrix();

    glEndList();
  }

  glPopMatrix();
}

void Galipeur::do_asserv()
{
  // Go in position
  if( order & ORDER_GO_XY )
  {
    if( distance2(get_xy(), target_xy) < threshold_xy )
    {
      set_v( btVector2(0,0) );
      order &= ~ORDER_GO_XY;
    }
    else
    {
      set_v( v_max * (target_xy-get_xy()).normalize() );
      set_av(0);
      return;
    }
  }

  // Turn
  if( order & ORDER_GO_A )
  {
    btScalar da = normA( target_a-get_a() );
    if( btFabs( da ) < threshold_a )
    {
      set_av(0);
      order &= ~ORDER_GO_A;
    }
    else
    {
      set_av( btFsel(da, av_max, -av_max) );
      set_v( btVector2(0,0) );
      return;
    }
  }
}

void Galipeur::set_v(btVector2 vxy)
{
  //XXX we have to force activation, is it a Bullet bug?
  body->activate();
  body->setLinearVelocity( btVector3(vxy.x, vxy.y,
        body->getLinearVelocity().z()) );
}

inline void Galipeur::set_av(btScalar v)
{
  //XXX we have to force activation, is it a Bullet bug?
  body->activate();
  body->setAngularVelocity( btVector3(0,0,v) );
}


void Galipeur::order_xy(btVector2 xy, bool rel)
{
  target_xy = xy;
  if( rel )
    target_xy += this->get_xy();

  order |= ORDER_GO_XY;
}

void Galipeur::order_a(btScalar a, bool rel)
{
  target_a = a;
  if( rel )
    target_a += this->get_a();
  target_a = normA(target_a);

  order |= ORDER_GO_A;
}



class LuaGalipeur: public LuaClass<Galipeur>
{
  static int _ctor(lua_State *L)
  {
    Galipeur *r = new Galipeur(LARG_f(2));
    store_ptr(L, r);
    lua_pushvalue(L, 1);
    r->ref_obj = luaL_ref(L, LUA_REGISTRYINDEX);

    return 0;
  }

  LUA_DEFINE_GETN_SCALED(2, get_xy, get_xy)
  LUA_DEFINE_GETN_SCALED(2, get_v, get_v)
  LUA_DEFINE_GET(get_a , get_a)
  LUA_DEFINE_GET(get_av, get_av)

  LUA_DEFINE_SET1(set_v_max,        set_v_max,        LARG_scaled)
  LUA_DEFINE_SET1(set_av_max,       set_av_max,       LARG_f)
  LUA_DEFINE_SET1(set_threshold_xy, set_threshold_xy, LARG_scaled)
  LUA_DEFINE_SET1(set_threshold_a,  set_threshold_a,  LARG_f)

  static int order_xy(lua_State *L)
  {
    get_ptr(L,1)->order_xy( btVector2(LARG_scaled(2), LARG_scaled(3)), LARG_bn(4) );
    return 0;
  }
  static int order_xya(lua_State *L)
  {
    get_ptr(L,1)->order_xya( btVector2(LARG_scaled(2), LARG_scaled(3)), LARG_f(4), LARG_bn(5) );
    return 0;
  }
  LUA_DEFINE_SET2(order_a, order_a, LARG_f, LARG_bn)
  LUA_DEFINE_SET0(order_stop, order_stop)

  LUA_DEFINE_GET(is_waiting, is_waiting)

public:
  LuaGalipeur()
  {
    LUA_REGFUNC(_ctor);

    LUA_REGFUNC(get_xy);
    LUA_REGFUNC(get_v);
    LUA_REGFUNC(get_a);
    LUA_REGFUNC(get_av);

    LUA_REGFUNC(set_v_max);
    LUA_REGFUNC(set_av_max);
    LUA_REGFUNC(set_threshold_xy);
    LUA_REGFUNC(set_threshold_a);

    LUA_REGFUNC(order_xy);
    LUA_REGFUNC(order_xya);
    LUA_REGFUNC(order_a);
    LUA_REGFUNC(order_stop);

    LUA_REGFUNC(is_waiting);
  }
};

LUA_REGISTER_SUB_CLASS(Galipeur,Robot);

