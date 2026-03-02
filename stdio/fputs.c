#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "w");

    fputs("John", fptr);

    fclose(fptr);

    return 0;
}
