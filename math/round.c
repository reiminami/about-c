#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", round(0.4));     // 0.0
    printf("%f\n", round(0.5));     // 1.0
    printf("%f\n", round(30.50));   // 31.0

    return 0;
}
