#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDXYZ";

    int cmp = memcmp(s1, s2, 4);

    if (cmp == 0) {
        printf("s1とs2は同じ\n");
    } else if (cmp > 0) {
        printf("s1の方が大きい\n");
    } else {
        printf("s2の方が大きい\n");
    }
}
