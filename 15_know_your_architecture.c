/*
 * 15 - Know Your Architecture
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("bool:\t%lu byte(s) = %lu bits\n", sizeof(bool), 8 * sizeof(bool));
    printf("char:\t%lu byte(s) = %lu bits\n", sizeof(char), 8 * sizeof(char));
    printf("short:\t%lu byte(s) = %lu bits\n", sizeof(short), 8 * sizeof(short));
    printf("int:\t%lu byte(s) = %lu bits\n", sizeof(int), 8 * sizeof(int));
    printf("float:\t%lu byte(s) = %lu bits\n", sizeof(float), 8 * sizeof(float));
    printf("double:\t%lu byte(s) = %lu bits\n", sizeof(double), 8 * sizeof(double));
}
