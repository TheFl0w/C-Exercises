/*
 * 20 - Complex numberss
 */
#include <stdio.h>
#include <math.h>

struct complex {
    double real;
    double imaginary;
};

struct complex scanComplex();
void printComplex(struct complex c);
struct complex addComplex(struct complex c, struct complex d);
struct complex multComplex(struct complex c, struct complex d);
double absComplex(struct complex c);

struct complex scanComplex() {
    struct complex result;
    scanf("%lf + %lfi", &result.real, &result.imaginary);
    return result;
}

void printComplex(struct complex c) {
    printf("%lf + %lfi", c.real, c.imaginary);
}

struct complex addComplex(struct complex c, struct complex d) {
    c.real += d.real;
    c.imaginary += d.imaginary;
    return c;
}

struct complex multComplex(struct complex c, struct complex d) {
    struct complex result;
    result.real = c.real * d.real - c.imaginary * d.imaginary;
    result.imaginary = c.real * d.imaginary + c.imaginary * d.real;
    return result;
}

double absComplex(struct complex c) {
    return sqrt(c.real * c.real + c.imaginary * c.imaginary);
}

int main() {
    struct complex x, y;
    printf("Input of x --> (a + bi): ");
    x = scanComplex();
    printf("Input of y --> (a + bi): ");
    y = scanComplex();
    puts("--------------------");
    printf("x: ");
    printComplex(x);
    printf("\ny: ");
    printComplex(y);
    puts("\n--------------------");
    printf("|x|: %lf\n", absComplex(x));
    printf("|y|: %lf\n", absComplex(y));
    puts("--------------------");
    printf("x + y: ");
    printComplex(addComplex(x, y));
    printf("\nx * y: ");
    printComplex(multComplex(x, y));
    puts("");
    return 0;
}
