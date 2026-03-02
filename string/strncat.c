#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "Hello";
    strncat(s, " World", 5);
    printf("%s\n", s);      // Hello Worl

    return 0;
}
