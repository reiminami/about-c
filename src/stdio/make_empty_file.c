#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("output.txt", "w");
    fclose(fptr);
}
