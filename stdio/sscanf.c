#include <stdio.h>

int main() {
    char age_s[] = "21 years old";
    int age;
    sscanf(age_s, "%d", &age);
    printf("%d\n", age);

    return 0;
}
