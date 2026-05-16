#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "5491 Views";
    int pos = strspn(msg, "0123456789");
    printf("%d\n", pos);
}
