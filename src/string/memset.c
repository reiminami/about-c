#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "ABCDEFG";
    memmove(msg, msg + 3, 3);
    printf("%s\n", msg);    // DEFDEFG

    char t[] = "ABCDEFG";
    memmove(t + 2, t, 4);
    printf("%s\n", t);      // ABABCDG
}
