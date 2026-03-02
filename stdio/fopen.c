#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("new_file.txt", "w");
    fclose(fptr);

    return 0;
}
