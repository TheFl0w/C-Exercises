/*
 * 19 - Desrever
 */
#include <stdio.h>

void printReversed(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++);
    for (int j = i - 1; j >= 0; j--)
        printf("%c", str[j]);
}

int main() {
    char str[] = "Hello World!";
    printReversed(str);
    puts("");
    return 0;
}
