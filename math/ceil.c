#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", ceil(0.60)); // 1.0
    printf("%f\n", ceil(0.40)); // 1.0
    printf("%f\n", ceil(5));    // 5.0
    printf("%f\n", ceil(5.1));  // 6.0
    printf("%f\n", ceil(-5));   // -5.0
    printf("%f\n", ceil(-5.1)); // -5.0

    return 0;
}
