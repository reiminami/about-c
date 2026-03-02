#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Slow Dance";
    int pos = strcspn(s, "ABCDE");
    printf("%d", pos);  // 5

    return 0;
}
