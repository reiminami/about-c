#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "ABCD";
    char s2[] = "ABCE";
    int cmp = strcmp(s1, s2);

    if (cmp > 0) {
        printf("s1が大きい");
    } else if (cmp < 0) {
        printf("s2が大きい");
    } else {
        printf("同じ");
    }

    return 0;
}
