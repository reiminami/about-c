#include <stdio.h>
#include <string.h>

int main() {
    char name1[10] = "John";
    char name2[10] = "";

    strcpy(name2, name1);

    printf("%s %s\n", name1, name2);    // John John
}
