#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", floor(0.60)); // 0.0
    printf("%f\n", floor(0.40)); // 0.0
    printf("%f\n", floor(5));    // 5.0
    printf("%f\n", floor(5.1));  // 5.0
    printf("%f\n", floor(-5));   // -5.0
    printf("%f\n", floor(-5.1)); // -6.0

    return 0;
}
