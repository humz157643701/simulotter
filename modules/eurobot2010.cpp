#include "modules/eurobot2010.h"
#include "physics.h"
#include "config.h"


namespace eurobot2010
{
  const btScalar ORaisedZone::width = scale(0.500);
  const btScalar ORaisedZone::height = scale(0.140);
  const btScalar ORaisedZone::bottom_length = scale(2*0.480+0.500);
  const btScalar ORaisedZone::top_length = scale(0.500);
  const btScalar ORaisedZone::strip_length = scale(0.100);
  const btScalar ORaisedZone::wall_width = scale(0.022);
  const btScalar ORaisedZone::wall_height = scale(0.070);
  const btScalar ORaisedZone::wall_bottom_length = scale(2*0.500+0.520);
  const btScalar ORaisedZone::wall_top_length = scale(0.520);
  SmartPtr<btCompoundShape> ORaisedZone::shape;
  btConvexHullShape ORaisedZone::body_shape;
  btConvexHullShape ORaisedZone::wall_shape;

  ORaisedZone::ORaisedZone()
  {
    // First instance: initialize shape
    if( shape == NULL )
    {
      shape = new btCompoundShape();

      if( body_shape.getNumPoints() == 0 )
      {
        // bottom
        body_shape.addPoint( btVector3(-bottom_length/2, -width/2, 0) );
        body_shape.addPoint( btVector3(-bottom_length/2, +width/2, 0) );
        body_shape.addPoint( btVector3(+bottom_length/2, +width/2, 0) );
        body_shape.addPoint( btVector3(+bottom_length/2, -width/2, 0) );
        // top
        body_shape.addPoint( btVector3(-top_length/2, -width/2, height) );
        body_shape.addPoint( btVector3(-top_length/2, +width/2, height) );
        body_shape.addPoint( btVector3(+top_length/2, +width/2, height) );
        body_shape.addPoint( btVector3(+top_length/2, -width/2, height) );
      }

      if( wall_shape.getNumPoints() == 0 )
      {
        // front
        wall_shape.addPoint( btVector3(-wall_bottom_length/2, +wall_width/2, 0) );
        wall_shape.addPoint( btVector3(+wall_bottom_length/2, +wall_width/2, 0) );
        wall_shape.addPoint( btVector3(-wall_bottom_length/2, +wall_width/2, wall_height) );
        wall_shape.addPoint( btVector3(+wall_bottom_length/2, +wall_width/2, wall_height) );
        wall_shape.addPoint( btVector3(-wall_top_length/2, +wall_width/2, height+wall_height) );
        wall_shape.addPoint( btVector3(+wall_top_length/2, +wall_width/2, height+wall_height) );
        // back
        wall_shape.addPoint( btVector3(-wall_bottom_length/2, -wall_width/2, 0) );
        wall_shape.addPoint( btVector3(+wall_bottom_length/2, -wall_width/2, 0) );
        wall_shape.addPoint( btVector3(-wall_bottom_length/2, -wall_width/2, wall_height) );
        wall_shape.addPoint( btVector3(+wall_bottom_length/2, -wall_width/2, wall_height) );
        wall_shape.addPoint( btVector3(-wall_top_length/2, -wall_width/2, height+wall_height) );
        wall_shape.addPoint( btVector3(+wall_top_length/2, -wall_width/2, height+wall_height) );
      }

      shape->addChildShape(btTransform::getIdentity(), &body_shape);

      btTransform tr = btTransform::getIdentity();
      tr.setOrigin( btVector3(0, (width+wall_width)/2, 0) );
      shape->addChildShape( tr, &wall_shape);
      tr.setOrigin( -tr.getOrigin() );
      shape->addChildShape( tr, &wall_shape);
    }
    setShape( shape );
  }

  void ORaisedZone::draw()
  {
    glPushMatrix();
    drawTransform(getTrans());

    // NOTE: there should not have several instances, thus we do not really
    // need a static display list id to share the display list.
    if( dl_id != 0 )
      glCallList(dl_id);
    else
    {
      // new display list
      dl_id = glGenLists(1);
      glNewList(dl_id, GL_COMPILE_AND_EXECUTE);

      glColor4fv(Color4(1)); // RAL 9016

      glBegin(GL_QUAD_STRIP);
      const btVector2 vn_slope = btVector2(height,(bottom_length-top_length)/2).normalized();
      // slope x>0
      btglVertex3( +bottom_length/2, +width/2, 0 );
      btglVertex3( +bottom_length/2, -width/2, 0 );
      btglNormal3( vn_slope.x, 0, vn_slope.y );
      btglVertex3( +   top_length/2, +width/2, height );
      btglVertex3( +   top_length/2, -width/2, height );
      // top
      btglNormal3( 0, 0, 1 );
      btglVertex3( -top_length/2, +width/2, height );
      btglVertex3( -top_length/2, -width/2, height );
      // slope x<0
      btglNormal3( -vn_slope.x, 0, vn_slope.y );
      btglVertex3( -bottom_length/2, +width/2, 0 );
      btglVertex3( -bottom_length/2, -width/2, 0 );
      glEnd();

      glBegin(GL_QUADS);
      // bottom (with strips)
      btglNormal3( 0, 0, 1 );
      btglVertex3( -bottom_length/2-strip_length, -width/2, cfg.draw_epsilon );
      btglVertex3( -bottom_length/2-strip_length, +width/2, cfg.draw_epsilon );
      btglVertex3( +bottom_length/2+strip_length, +width/2, cfg.draw_epsilon );
      btglVertex3( +bottom_length/2+strip_length, -width/2, cfg.draw_epsilon );
      glEnd();

      glTranslatef(0, -(width+wall_width)/2, 0);
      draw_wall();
      glTranslatef(0, +(width+wall_width), 0);
      draw_wall();

      glEndList();
    }

    glPopMatrix();
  }

  void ORaisedZone::draw_wall()
  {
    glColor4fv(Color4(0x14,0x17,0x1c)); // RAL 9017
    const btVector2 vn_slope = btVector2(height,(wall_bottom_length-wall_top_length)/2).normalized();

    // outline
    glBegin(GL_QUAD_STRIP);
    btglVertex3( -wall_bottom_length/2, -wall_width/2, 0 );
    btglVertex3( -wall_bottom_length/2, +wall_width/2, 0 );
    btglNormal3( 0, 0, -1 ); // bottom
    btglVertex3( +wall_bottom_length/2, -wall_width/2, 0 );
    btglVertex3( +wall_bottom_length/2, +wall_width/2, 0 );
    btglNormal3( 1, 0, 0 ); // side x>0
    btglVertex3( +wall_bottom_length/2, -wall_width/2, wall_height );
    btglVertex3( +wall_bottom_length/2, +wall_width/2, wall_height );
    btglNormal3( vn_slope.x, 0, vn_slope.y ); // slope x>0
    btglVertex3( +wall_top_length/2, -wall_width/2, height+wall_height );
    btglVertex3( +wall_top_length/2, +wall_width/2, height+wall_height );
    btglNormal3( 0, 0, 1 ); // top
    btglVertex3( -wall_top_length/2, -wall_width/2, height+wall_height );
    btglVertex3( -wall_top_length/2, +wall_width/2, height+wall_height );
    btglNormal3( -vn_slope.x, 0, vn_slope.y ); // slope x<0
    btglVertex3( -wall_bottom_length/2, -wall_width/2, wall_height );
    btglVertex3( -wall_bottom_length/2, +wall_width/2, wall_height );
    btglNormal3( -1, 0, 0 ); // side x<0
    btglVertex3( -wall_bottom_length/2, -wall_width/2, 0 );
    btglVertex3( -wall_bottom_length/2, +wall_width/2, 0 );
    glEnd();

    // front face
    glBegin(GL_POLYGON);
    btglNormal3( 0, 1, 0 );
    btglVertex3( -wall_bottom_length/2, +wall_width/2, 0 );
    btglVertex3( +wall_bottom_length/2, +wall_width/2, 0 );
    btglVertex3( +wall_bottom_length/2, +wall_width/2, wall_height );
    btglVertex3( +wall_top_length/2, +wall_width/2, height+wall_height );
    btglVertex3( -wall_top_length/2, +wall_width/2, height+wall_height );
    btglVertex3( -wall_bottom_length/2, +wall_width/2, wall_height );
    glEnd();

    // front face
    glBegin(GL_POLYGON);
    btglNormal3( 0, -1, 0 );
    btglVertex3( -wall_bottom_length/2, -wall_width/2, 0 );
    btglVertex3( +wall_bottom_length/2, -wall_width/2, 0 );
    btglVertex3( +wall_bottom_length/2, -wall_width/2, wall_height );
    btglVertex3( +wall_top_length/2, -wall_width/2, height+wall_height );
    btglVertex3( -wall_top_length/2, -wall_width/2, height+wall_height );
    btglVertex3( -wall_bottom_length/2, -wall_width/2, wall_height );
    glEnd();
  }


  SmartPtr<btCylinderShapeZ> OCorn::shape(new btCylinderShapeZ(scale(btVector3(0.025,0.025,0.075))));
  const btScalar OCorn::pivot_radius = scale(0.005);
  const btScalar OCorn::pivot_mass = 50;
  SmartPtr<btCollisionShape> OCorn::pivot_shape(new btSphereShape(pivot_radius));

  OCorn::OCorn(): opivot(NULL), pivot_attach(NULL)
  {
    setShape( shape );
    setMass( 0.250 );
    setColor(Color4( 0xff, 0xf5, 0xe3 )); // RAL 1013
  }

  void OCorn::plant(btScalar x, btScalar y)
  {
    if( physics == NULL )
      throw(Error("cannot plant a corn which is not in a world"));

    uproot();

    btScalar h = shape->getHalfExtentsWithMargin().getZ();

    // Create the pivot rigid body.
    opivot = new btRigidBody(btRigidBodyConstructionInfo(0,NULL,NULL));
    opivot->setCollisionShape(pivot_shape);
    btVector3 inertia;
    pivot_shape->calculateLocalInertia(pivot_mass, inertia);
    opivot->setMassProps(pivot_mass, inertia);
    opivot->updateInertiaTensor();
    opivot->setCenterOfMassTransform( btTransform(
          btMatrix3x3::getIdentity(), btVector3(x, y, pivot_radius)
          ) );
    physics->getWorld()->addRigidBody(opivot);

    // Create the pivot constraint
    pivot_attach = new btPoint2PointConstraint(*this, *opivot,
        btVector3(0, 0, -h), btVector3(0, 0, -0.9*pivot_radius)
        );
    physics->getWorld()->addConstraint(pivot_attach, true);

    enableTickCallback();

    setPos( btVector3( x, y, h ) );
  }

  void OCorn::uproot()
  {
    if( ! physics || ! pivot_attach )
      return;

    physics->getWorld()->removeConstraint(pivot_attach);
    delete pivot_attach;

    pivot_attach = NULL;
    physics->getWorld()->removeRigidBody(opivot);
    delete opivot;
    opivot = NULL;

    disableTickCallback();
  }

  void OCorn::removeFromWorld()
  {
    uproot();
    OSimple::removeFromWorld();
  }

  void OCorn::tickCallback()
  {
    // remove constraint if corn angle is not null
    btQuaternion q;
    getRot().getRotation(q);
    if( btFabs(q.getAngle()) > 0.1 )
      uproot();
  }


  SmartPtr<btCylinderShapeZ> OCornFake::shape(new btCylinderShapeZ(scale(btVector3(0.025,0.025,0.075))));

  OCornFake::OCornFake()
  {
    setShape( shape );
    setMass(0);
    setColor(Color4( 0x14, 0x17, 0x1c )); // RAL 9017
  }


  SmartPtr<btSphereShape> OTomato::shape(new btSphereShape(scale(0.050)));

  OTomato::OTomato()
  {
    setShape( shape );
    setColor( Color4(0xff, 0,0) );
    setMass( 0.150 );
  }


  SmartPtr<btSphereShape> OOrange::shape(new btSphereShape(scale(0.050)));

  OOrange::OOrange()
  {
    setShape( shape );
    setColor( Color4(0xff, 0x80,0) );
    setMass( 0.300 );
  }


  class LuaORaisedZone: public LuaClass<ORaisedZone>
  {
    static int _ctor(lua_State *L)
    {
      store_ptr(L, new ORaisedZone());
      return 0;
    }


    virtual void init_members(lua_State *L)
    {
      LUA_CLASS_MEMBER(_ctor);
    }
  };


  class LuaOCorn: public LuaClass<OCorn>
  {
    static int _ctor(lua_State *L)
    {
      store_ptr(L, new OCorn());
      return 0;
    }

    LUA_DEFINE_SET2(plant,plant, LARG_scaled, LARG_scaled);
    LUA_DEFINE_SET0(uproot,uproot);


    virtual void init_members(lua_State *L)
    {
      LUA_CLASS_MEMBER(_ctor);
      LUA_CLASS_MEMBER(plant);
      LUA_CLASS_MEMBER(uproot);
    }
  };


  class LuaOCornFake: public LuaClass<OCornFake>
  {
    static int _ctor(lua_State *L)
    {
      store_ptr(L, new OCornFake());
      return 0;
    }


    virtual void init_members(lua_State *L)
    {
      LUA_CLASS_MEMBER(_ctor);
    }
  };


  class LuaOTomato: public LuaClass<OTomato>
  {
    static int _ctor(lua_State *L)
    {
      store_ptr(L, new OTomato());
      return 0;
    }


    virtual void init_members(lua_State *L)
    {
      LUA_CLASS_MEMBER(_ctor);
    }
  };


  class LuaOOrange: public LuaClass<OOrange>
  {
    static int _ctor(lua_State *L)
    {
      store_ptr(L, new OOrange());
      return 0;
    }


    virtual void init_members(lua_State *L)
    {
      LUA_CLASS_MEMBER(_ctor);
    }
  };


  void LuaEurobotModule::do_import(lua_State *L)
  {
    LUA_IMPORT_CLASS_NS(eurobot2010,ORaisedZone);
    LUA_IMPORT_CLASS_NS(eurobot2010,OCorn);
    LUA_IMPORT_CLASS_NS(eurobot2010,OCornFake);
    LUA_IMPORT_CLASS_NS(eurobot2010,OTomato);
    LUA_IMPORT_CLASS_NS(eurobot2010,OOrange);
    LUA_IMPORT_CLASS(Galipeur);
    LUA_IMPORT_CLASS(OGround);
  }

  LUA_REGISTER_SUB_CLASS_NS(eurobot2010,ORaisedZone,OSimple);
  LUA_REGISTER_SUB_CLASS_NS(eurobot2010,OCorn,OSimple);
  LUA_REGISTER_SUB_CLASS_NS(eurobot2010,OCornFake,OSimple);
  LUA_REGISTER_SUB_CLASS_NS(eurobot2010,OTomato,OSimple);
  LUA_REGISTER_SUB_CLASS_NS(eurobot2010,OOrange,OSimple);

}

