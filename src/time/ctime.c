#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    char *tstr;

    t = time(NULL);
    tstr = ctime(&t);
    printf("%s\n", tstr);   //  Tue Mar  3 04:56:06 2026
}
