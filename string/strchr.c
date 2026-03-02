#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello World";
    char *s_ptr = strchr(s, 'W');
    if (s_ptr != NULL) {
        printf("%s", s_ptr);    // World
    }

    return 0;
}
