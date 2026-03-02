#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "a");

    char *content = "Ringo";
    fwrite(content, 1, 5, fptr);

    fclose(fptr);

    return 0;
}
