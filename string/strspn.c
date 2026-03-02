#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "915 Views";
    int pos = strspn(s, "0123456789");
    printf("%d", pos);  // 3

    return 0;
}
