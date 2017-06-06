#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>
#include "structures.h"

/*
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
*/

#define rnd() (float)rand() / (float) RAND_MAX

void setVelocity(Particle *p){
	p->velocity.y = rnd() * 1.0 - 0.5;
	p->velocity.x = rnd() * 2.0 - 1.0;
	
}
