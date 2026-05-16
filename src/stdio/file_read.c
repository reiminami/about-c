#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("output.txt", "r");

    // fgetc - 文字を読み込む
    char c = fgetc(fptr);
    printf("fgetc: %c\n", c);

    // fgets - 文字列を読み込む
    char name[10];
    fgets(name, 10, fptr);
    printf("fgets: %s\n", name);

    // rewind - ファイルポインタを先頭に移動
    rewind(fptr);

    // fread - ファイルのデータを読み込む (ファイル内すべて)
    char content[30];
    int n = fread(content, 1, 29, fptr);
    content[n] = '\0';
    printf("%s\n", content);

    rewind(fptr);

    // fscanf - ファイルから文字列を読み込む
    char line[10];
    fscanf(fptr, "%9s", line);
    printf("%s\n", line);

    fclose(fptr);
}
