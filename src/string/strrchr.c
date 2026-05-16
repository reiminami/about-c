#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "Hello, World!";
    char *msgptr;

    msgptr = strchr(msg, 'o');  // o, World!
    printf("%s\n", msgptr);

    msgptr = strrchr(msg, 'o'); // orld!
    printf("%s\n", msgptr);
}
