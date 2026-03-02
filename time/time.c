#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    t = time(NULL);
    printf("%ld\n", t); // 1772480893

    return 0;
}
