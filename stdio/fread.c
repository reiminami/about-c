#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    char name[10];
    int n = fread(name, 1, 9, fptr);
    name[n] = '\0';
    printf("%s", name);

    fclose(fptr);

    return 0;
}
