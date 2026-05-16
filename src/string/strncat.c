#include <stdio.h>
#include <string.h>

int main() {
    char msg[15] = "Hello, ";
    strncat(msg, "WORLD!", 3);

    printf("%s\n", msg);
}
