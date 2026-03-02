#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    char c = fgetc(fptr);
    printf("%c", c);

    fclose(fptr);

    return 0;
}
