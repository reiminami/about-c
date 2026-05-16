#include <stdio.h>
#include <string.h>

int main() {
    char *msg = "Hello World";
    size_t msglen = strlen(msg);

    printf("%zu\n", msglen);
}
