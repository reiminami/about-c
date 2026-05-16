#include <stdio.h>
#include <string.h>

int main() {
    char msg[15] = "Hello";
    strcat(msg, ", ");
    strcat(msg, "WORLD!");

    printf("%s\n", msg);
}
