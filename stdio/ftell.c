#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    int position = ftell(fptr);
    printf("%d\n", position);

    fclose(fptr);

    return 0;
}
