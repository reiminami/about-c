#include <stdio.h>

int main() {
    char s[50];
    snprintf(s, 50, "What the %s am I doin' here?", "hell");
    printf("%s", s);

    return 0;
}
