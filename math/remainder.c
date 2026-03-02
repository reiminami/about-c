#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", remainder(10.0, 2.0));  // 0.0
    printf("%f\n", remainder(11.0, 2.0));  // -1.0
    printf("%f\n", remainder(11.0, 4.5));  // 2.0

    return 0;
}
