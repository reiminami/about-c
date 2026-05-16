#include <stdio.h>

int main() {
    // sprintf - フォーマットされた文字列を文字列に書き込む
    char msg1[50];
    sprintf(msg1, "What the %s", "Hell");
    printf("%s\n", msg1);

    // snprintf - フォーマットされた文字列を文字列に書き込む
    char msg2[50];
    snprintf(msg2, 50, "What the %s", "hell");
    printf("%s\n", msg2);
}
