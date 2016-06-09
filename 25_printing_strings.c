#include <stdio.h>

void basicPrint(char * str) {
    while (*str != '\0')
        printf("%c", *str++);
}

void advancedPrint(char * str) {
    while (*str != '\0')
        printf("%c ", *str++);
}

int main() {
    char testString[] = "Hello World!\n";
    basicPrint(testString);
    advancedPrint(testString);
    return 0;
}
