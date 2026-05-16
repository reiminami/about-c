#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("output.txt", "a");

    char *name;
    name = "John\n";
    fwrite(name, 1, 5, fptr);

    fclose(fptr);
}
