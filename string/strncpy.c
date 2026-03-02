#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello World";
    char s2[20];

    strncpy(s2, s1, 7);
    s2[7] = '\0';

    printf("%s\n", s1); // Hello World
    printf("%s\n", s2); // Hello W

    return 0;
}
