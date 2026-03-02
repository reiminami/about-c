#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Lean with me";
    char *s_ptr = strtok(s, " ");

    while (s_ptr != NULL) {
        printf("%s\n", s_ptr);
        s_ptr = strtok(NULL, " ");
    }
    /*
    Lean
    with
    me
    */

    return 0;
}
