#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", hypot(0.0, 0.0));    // 0.0
    printf("%f\n", hypot(1.0, 1.0));    // 1.414214
    printf("%f\n", hypot(1.0f, 1.0f));  // 1.414214
    printf("%f\n", hypot(1.0, 2.0));    // 2.236068

    return 0;
}
