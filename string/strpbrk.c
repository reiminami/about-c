#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Total: 32590 Views";
    char *pos = strpbrk(s, "0123456789");
    if (pos != NULL) {
        printf("%s", pos);  // 32590 Views
    }

    return 0;
}
