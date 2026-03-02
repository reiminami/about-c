#include <stdio.h>
#include <string.h>

int main() {
    // memmove(コピー先オブジェクトポインタ, コピー元オブジェクトポインタ, バイト数)
    char s[] = "ABCDEFG";
    memmove(s, s+3, 3);
    printf("%s\n", s);      // CDEFEFG

    char t[] = "ABCDEFG";
    memmove(t+2, t, 4);
    printf("%s\n", t);      // ABABCDG

    return 0;
}
