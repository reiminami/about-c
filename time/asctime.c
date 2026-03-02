#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *localt;
    char *t_str;

    t = time(NULL);
    localt = localtime(&t);
    t_str = asctime(localt);

    printf("%s", t_str);    // Tue Mar  3 04:56:06 2026

    return 0;
}
