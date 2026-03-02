#include <stdio.h>
#include <stdlib.h>

int main() {
    div_t result = div(10, 3);
    printf("%d %d\n", result.quot, result.rem); // 3 1

    return 0;
}
