#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "Hello World";
    int pos = strcspn(msg, "WXYZ");
    printf("%d\n", pos);
}
