#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "Hello My World";
    char *msgptr = strtok(msg, " ");

    while (msgptr != NULL) {
        printf("%s\n", msgptr);
        msgptr = strtok(NULL, " ");
    }
}
