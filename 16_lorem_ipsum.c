/*
 * 16 - Lorem Ipsum
 */
#include <stdio.h>

int main() {
    char str[] = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr,\n"
            "sed diam nonumy eirmod tempor invidunt ut labore et\n"
            "dolore magna aliquyam erat, sed diam voluptua. At vero\n"
            "eos et accusam et justo duo dolores et ea rebum.";
    puts(str);
    puts("");
    /* print each character ... */
    for (int i = 0; i < sizeof(str); i++) {
        putchar(str[i]);
    }
    return 0;
}
