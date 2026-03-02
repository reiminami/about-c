#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "w");

    fputc('A', fptr);

    fclose(fptr);

    return 0;
}
