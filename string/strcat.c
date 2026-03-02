#include <stdio.h>
#include <string.h>

int main() {
    char s[15] = "Hello";
    strcat(s, " World");
    printf("%s\n", s);

    return 0;
}
