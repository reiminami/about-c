#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    char output[50];
    fscanf(fptr, "%49s", output);
    printf("%s", output);

    fclose(fptr);

    return 0;
}
