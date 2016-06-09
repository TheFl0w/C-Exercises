#include <stdio.h>

/* basic swap function */

void swap(int * a, int * b) {
    int c = *a;
    *a = *b;
    *b = c;
}

enum direction {
    LEFT, RIGHT
};

/* rotate function with 3 values */

void rotate(int * a, int * b, int * c, enum direction d) {
    int buf;
    if (d == LEFT) {
        buf = *a;
        *a = *b;
        *b = *c;
        *c = buf;
    } else {
        buf = *c;
        *c = *b;
        *b = *a;
        *a = buf;
    }
}

/* rotate function for general integer arrays */

void rotateArray(int * a, unsigned int length, enum direction d) {
    int buf;
    if (d == LEFT) {
        buf = *a;
        for (int i = 0; i < length - 1; i++)
            a[i] = a[i + 1];
        a[length - 1] = buf;
    } else {
        buf = a[length - 1];
        for (int i = length - 1; i > 0; i--)
            a[i] = a[i - 1];
        *a = buf;
    }
}

int main() {
    /* ... */
    return 0;
}
