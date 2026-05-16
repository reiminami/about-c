#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *localt;
    char *tstr;

    t = time(NULL);
    localt = localtime(&t);
    tstr = asctime(localt);
    printf("%s\n", tstr);   // Tue Mar  3 04:56:06 2026
}
