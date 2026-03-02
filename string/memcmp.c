#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "ABCD";
    char s2[] = "ABCE";
    int cmp = memcmp(s1, s2, 4);

    if (cmp > 0) {
        printf("s1が大きい %d", cmp);
    } else if (cmp < 0) {
        printf("s2が大きい %d", cmp);
    } else {
        printf("同じ");
    }

    return 0;
}
