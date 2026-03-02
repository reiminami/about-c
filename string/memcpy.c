#include <stdio.h>
#include <string.h>

int main() {
    // memcpy(コピー先オブジェクトポインタ, コピー元オブジェクトポインタ, バイト数)
    char s[] = "ABCDEFG";
    memcpy(s, s+3, 3);
    printf("%s\n", s);      // DEFDEFG

    return 0;
}
