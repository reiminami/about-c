#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *gmt;

    t = time(NULL);
    gmt = gmtime(&t);

    printf("%d\n", gmt->tm_year + 1900);    // 2026
    printf("%d\n", gmt->tm_mon + 1);        // 3
    printf("%d\n", gmt->tm_mday + 1);       // 3
}
