#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *gmt;

    t = time(NULL);
    gmt = gmtime(&t);

    printf("%d %d %d\n", gmt->tm_year + 1900, gmt->tm_mon + 1, gmt->tm_mday + 1);
    // 2026 3 3

    return 0;
}
