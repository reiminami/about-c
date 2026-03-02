#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello World";
    char *ptr1 = strchr(s, 'o');
    char *ptr2 = strrchr(s, 'o');
    printf("%s\n", ptr1);   // o World
    printf("%s\n", ptr2);   // orld

    return 0;
}
