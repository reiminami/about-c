#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("names.txt", "r");

    fseek(fptr, 2, SEEK_SET);
    char c = fgetc(fptr);
    printf("%c", c);        // 文字列が"John" であれば"h"を出力

    fclose(fptr);

    return 0;
}
