/*
 * 02 - ASCII code explorer
 *
 * -- scanf() --
 * int scanf(const char *format, ...)
 * The function scanf writes input from stdin to
 * memory. The function is not type safe because it takes
 * memory addresses as argumens. Types will be read from the
 * format string. You can get the address of a variable using the
 * & operator.
 *
 * -- getchar() --
 * int getchar(void)
 * The function getchar() returns the first
 * character from stdin (int-to-char cast) or EOF.
 * We use this here to remove the newline feed from stdin so
 * single character reading works more than once.
 * This is completely unnecessary for reading only once from stdin.
 * --------------
 */

#include <stdio.h>

int main() {

    /* standard solution */

    char c;
    printf("Character input: ");
    scanf("%c", &c);
    printf("Character: '%c' -> ASCII: %d\n", c, c);
    getchar(); /* optional */

    /* expert solution 1 */

    char c1, c2, c3, c4, c5;
    printf("Character input: ");
    scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
    getchar(); /* optional */
    printf("Reversed codes: %d %d %d %d %d\n", c5, c4, c3, c2, c1);

    /* expert solution 2 */

    /*
     * Uses arrays and pointer arithmetics.
     * We will talk about this in the course.
     */

    char s[5];
    printf("Character input: ");
    scanf("%c %c %c %c %c", s, s + 1, s + 2, s + 3, s + 4);
    getchar(); /* optional */
    printf("Reversed codes: %d %d %d %d %d\n", s[4], s[3], s[2], s[1], s[0]);

    return 0;
}
