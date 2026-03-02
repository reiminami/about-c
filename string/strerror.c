#include <stdio.h>
#include <string.h>

int main() {
    printf("%s\n", strerror(0));    // Undefined error: 0
    printf("%s\n", strerror(1));    // Operation not permitted
    printf("%s\n", strerror(2));    // No such file or directory
    printf("%s\n", strerror(3));    // No such process

    return 0;
}
