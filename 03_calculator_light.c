/*
 * 03 - Calculator light
 */

#include <stdio.h>

int main() {
    int a, b;
    printf("Numbers a, b: ");
    scanf("%d, %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    /* expert solution 1 */
    double f1 = a, f2 = b;
    printf("real division 1: %d / %d = %f\n", a, b, f1 / f2);

    /* expert solution 2
     *
     * We cast a from int to double to get real division.
     * We will talk about this in the course.
     * Casting to float could alter the value because of type size.
     */
    printf("real division 2: %d / %d = %f\n", a, b, (double) a / b);
    return 0;
}
