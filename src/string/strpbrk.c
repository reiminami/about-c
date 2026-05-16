#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "Total 61458 Views";
    char *msgptr = strpbrk(msg, "0123456789");

    if (msgptr != NULL) {
        printf("%s\n", msgptr); // 61458 Views
    }
}
