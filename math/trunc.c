#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", trunc(0.60)); // 0.0
    printf("%f\n", trunc(0.40)); // 0.0
    printf("%f\n", trunc(5));    // 5.0
    printf("%f\n", trunc(5.1));  // 5.0
    printf("%f\n", trunc(-5));   // -5.0
    printf("%f\n", trunc(-5.1)); // -5.0

    return 0;
}
