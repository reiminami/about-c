#include <stdio.h>
#include <string.h>

int main() {
    char s[5];

    memset(s, 'A', 5);
    s[3] = '\0';
    printf("%s\n", s);  // AAA

    return 0;
}
