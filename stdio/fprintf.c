#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "w");

    fprintf(fptr, "George");

    fclose(fptr);

    return 0;
}
