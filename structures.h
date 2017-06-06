#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>

#define MAX_PARTICLES 2000

//Structures

struct Vec {
        float x, y, z;
};

struct Shape {
        float width, height;
        float radius;
        Vec center;
};

struct Particle {
        Shape s;
        Vec velocity;
};

class Game {
    public:
        Shape box;
        Particle particle[MAX_PARTICLES];
        int n;
        Game() {
                n=0;
        }
};

