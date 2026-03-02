#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    if (isalnum(c)) {
        printf("Yes\n");
    }

    return 0;
}
