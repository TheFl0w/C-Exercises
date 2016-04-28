/*
 * 06 - Feedback
 */

#include <stdio.h>

int main() {
    char c;
    printf("Character: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("%c is an upper-case letter.\n", c);
    else if (c >= 'a' && c <= 'z')
        printf("%c is lower-case. Upper-case is %c", c, c + 'A' - 'a');
    else if (c >= '0' && c <= '9')
        printf("%c is a number.\n", c);
    else
        printf("%c is a special character.\n", c);
    return 0;
}
