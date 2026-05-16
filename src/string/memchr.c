#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "Hello, World!";
    char *msgptr = (char *) memchr(msg, 'o', 12);

    if (msgptr != NULL) {
        printf("%s\n", msgptr); // o, World!
    }
}
