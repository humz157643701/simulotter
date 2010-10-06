CXX = g++

CFLAGS = -Wall -Wextra -Werror -I.
# debug info increase compilation significantly, use only when needed
#CFLAGS += -g

# If Bullet has been built using autotools or Jam
#BULLET_LIBS = -lbulletdynamics -lbulletcollision -lbulletmath
# If Bullet has been built using cmake
BULLET_LIBS = -lBulletDynamics -lBulletCollision -lLinearMath

LDLIBS = 
ifeq ($(OS),Windows_NT)
GL_LIBS = -lfreeglut -lopengl32 -lglu32
LDLIBS += -mconsole -mwindows -static-libgcc -static-libstdc++
# on Windows, use static libs whenever possible
LDLIBS += -Wl,-Bstatic $(BULLET_LIBS) -lpng -lz -lm $(GL_LIBS) -Wl,-Bdynamic -lSDL -lwinmm
#XXX:hack (bullet 2.77)
CFLAGS += -I/mingw/include/bullet
else
#XXX fix a segfault on exceptions which occurs on some systems
# libstdc++ should be linked before libGL
GL_LIBS = -lstdc++
GL_LIBS += -lGL -lGLU -lglut
LDLIBS += $(BULLET_LIBS) -lpng -lz -lm $(GL_LIBS) -lSDL
#XXX:hack (bullet 2.77)
CFLAGS += -I/usr/local/include/bullet
endif

ifeq ($(OS),Windows_NT)
CFLAGS += -DFREEGLUT_STATIC
TARGET_EXT = .dll
else
TARGET_EXT = .so
endif


BOOST_VERSION_SUFFIX =
PYTHON_LIB = python
PY_CFLAGS = $(CFLAGS)
PY_LDFLAGS = $(LDFLAGS)
PY_LDLIBS = $(LDLIBS) -lboost_python$(BOOST_VERSION_SUFFIX) -l$(PYTHON_LIB)
# precompiled header source
PY_CH_SRC = python/common.h


ifeq ($(OS),Windows_NT)
python_prefix = $(shell python -c 'import sys; print sys.prefix')
PY_CFLAGS += -I$(python_prefix)/include -DBOOST_PYTHON_STATIC_LIB
PY_LDFLAGS += -L$(python_prefix)/libs
BOOST_VERSION_SUFFIX = -mgw45-mt-1_44
PYTHON_LIB = python26
PY_TARGET_EXT = .pyd
else
PY_CFLAGS += $(shell python-config --includes)
PYTHON_LIB = python2.6
PY_TARGET_EXT = .so
endif


PROJECT_NAME = simulotter
TARGET = $(PROJECT_NAME)$(TARGET_EXT)

OBJS = physics.o display.o object.o sensors.o robot.o galipeur.o log.o
OBJS += modules/eurobot2009.o modules/eurobot2010.o modules/eurobot2011.o


PY_TARGET = python/$(PROJECT_NAME)/_$(PROJECT_NAME)$(PY_TARGET_EXT)

PY_SRCS = $(wildcard python/*.cpp)
PY_OBJS = $(PY_SRCS:.cpp=.o)


ALL_OBJS = $(OBJS) $(PY_OBJS)

default: $(TARGET)

python: $(PY_TARGET)

all: default python

-include $(ALL_OBJS:.o=.d)


$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@ -shared $(LDFLAGS) $(LDLIBS)

$(PY_TARGET): $(OBJS) $(PY_OBJS)
	$(CXX) $(PY_OBJS) $(OBJS) -o $@ -shared $(PY_LDFLAGS) $(PY_LDLIBS)

$(OBJS): %.o: %.cpp
	$(CXX) $(CFLAGS) -MMD -c $< -o $@


ifeq ($(PY_CH_SRC),)
PY_CH_OBJ = 
else
PY_CH_OBJ = $(PY_CH_SRC).gch

$(PY_CH_OBJ): $(PY_CH_SRC)
	$(CXX) $(PY_CFLAGS) -MMD $< -o $@
endif

$(PY_OBJS): %.o: %.cpp $(PY_CH_OBJ)
	$(CXX) $(PY_CFLAGS) -MMD -c $< -o $@

clean: distclean
	rm -f $(TARGET) $(PY_TARGET)

distclean:
	rm -f $(ALL_OBJS) $(ALL_OBJS:.o=.d) $(PY_CH_OBJ) $(PY_CH_SRC).d


