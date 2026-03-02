#include <stdio.h>
#include <string.h>

int main() {
    char *s = "Hello World";
    size_t s_len = strlen(s);
    printf("%zu\n", s_len);

    return 0;
}
