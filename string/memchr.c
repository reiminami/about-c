#include <stdio.h>
#include <string.h>

int main() {
    char txt[] = "Hello, World!";
    char *txt_ptr = (char*)memchr(txt, 'o', 12);
    if (txt_ptr != NULL) {
        printf("%s", txt_ptr);  // o, World!
    }

    return 0;
}
