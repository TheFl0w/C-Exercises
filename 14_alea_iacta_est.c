/*
 * 14 - Alea Iacta Est
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int) time(NULL));
    printf("Dice roll: %d", rand() % 6 + 1);
    return 0;
}
