#include <stdio.h>

int main() {
    int age;
    char *msg = "21 YEARS OLD";
    sscanf(msg, "%d", &age);
    printf("%d\n", age);
}
