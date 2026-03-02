#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    char *t_str;

    t = time(NULL);
    t_str = ctime(&t);
    printf("%s", t_str);    // Tue Mar  3 04:56:06 2026

    return 0;
}
