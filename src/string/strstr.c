#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "THIS IS IT";
    char *msgptr = strstr(msg, "IS");

    if (msgptr != NULL) {
        printf("%s\n", msgptr); // IS IS IT
    }
}
