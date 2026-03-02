#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "This is it";
    char *s_ptr = strstr(s, "is");
    if (s_ptr != NULL) {
        printf("%s", s_ptr);    // is is it
    }

    return 0;
}
