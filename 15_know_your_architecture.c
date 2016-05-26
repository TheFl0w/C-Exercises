/*
 * 15 - Know your architecture
 */
#include <stdio.h>

int main() {
    const char ids[6][15] = { "char", "int", "long", "l long", "float", "double" };
    unsigned long sizes[] = { sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double) };
    printf("Size:\t\tbytes \tbits\n");
    printf("---------------------------\n");
    for (int i = 0; i < sizeof(sizes) / sizeof(sizes[0]); i++) {
        printf("%s\t\t%lu\t%lu\n", ids[i], sizes[i], 8 * sizes[i]);
    }

    return 0;
}
