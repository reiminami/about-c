#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("output.txt", "r");

    // fseek - ファイルの特定位置を読み込む
    fseek(fptr, 2, SEEK_SET);
    char c = fgetc(fptr);
    printf("%c\n", c);  // Johnの場合"h"

    // rewind - ファイルポインタを先頭に移動
    rewind(fptr);

    // ftell - 現在のファイルポインタを返す
    int pos = ftell(fptr);
    printf("%d\n", pos);


    fclose(fptr);
}
