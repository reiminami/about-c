#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "Hello, World!";
    char *msgptr = strchr(msg, 'W');

    if (msgptr != NULL) {
        printf("%s", msgptr);   // World
    }
}
