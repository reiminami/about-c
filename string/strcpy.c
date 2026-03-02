#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Hello World";
    char s2[20];

    strcpy(s2, s1);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
