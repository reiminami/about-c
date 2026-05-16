#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "ABCDEFG";

    memcpy(msg, msg + 3, 3);
    printf("%s\n", msg);    // DEFDEFG
}
