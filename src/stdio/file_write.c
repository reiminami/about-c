#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("output.txt", "w");

    // 書き込み
    fprintf(fptr, "John\n");

    // 文字の書き込み
    fputc('X', fptr);
    fputc('\n', fptr);

    // 文字列の書き込み
    fputs("Paul\n", fptr);

    fclose(fptr);
}
