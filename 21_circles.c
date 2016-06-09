#include <stdio.h>

struct point {
    float x;
    float y;
};

struct circle {
    struct point center;
    float radius;
    float circumference;
    float area;
};

int main() {
    const float pi = 3.14;

    /* create data structure to store values */
    struct circle c;

    /* read data */
    printf("Center coordinates x, y: ");
    scanf("%f, %f", &c.center.x, &c.center.y);
    printf("Radius: ");
    scanf("%f", &c.radius);

    /* calculate circumference and area */
    c.area = pi * c.radius * c.radius;
    c.circumference = 2 * pi * c.radius;

    /* print values */
    printf("\n--- Circle ---\n");
    printf("Center: (%f, %f)\n", c.center.x, c.center.y);
    printf("Radius: %f\n", c.radius);
    printf("Circumference: %f\n", c.circumference);
    printf("Area: %f\n", c.area);

    return 0;
}
