#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    char name[10];
    fgets(name, 10, fptr);
    printf("%s", name);

    fclose(fptr);

    return 0;
}
