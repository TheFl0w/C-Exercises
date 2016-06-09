#include <stdio.h>

struct circle {
    float radius;
    float circumference;
    float area;
};

struct circle basic(float radius) {
    const float pi = 3.14;
    struct circle c;
    c.radius = radius;
    c.circumference = 2 * pi * radius;
    c.area = pi * radius * radius;
    return c;
}

/* -- advanced. why the hell would you implement pi as an integer ??? -- */

enum constants {
    PI = 3
};

void advanced(struct circle * c) {
    c->circumference = 2 * PI * c->radius;
    c->area = PI * c->radius * c->radius;
}

int main() {
    /* ... */
    return 0;
}
