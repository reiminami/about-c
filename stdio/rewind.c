#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    char name[10];
    fgets(name, 10, fptr);
    printf("%s", name);

    rewind(fptr);

    fgets(name, 10, fptr);
    printf("%s", name);

    return 0;
}
