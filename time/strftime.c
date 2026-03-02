#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *localt;
    char t_str[256];
    size_t ret;

    t = time(NULL);
    localt = localtime(&t);
    ret = strftime(t_str, 256, "%Y/%m/%d %H:%M:%S %a", localt);

    if (ret > 0) {
        printf("%s\n", t_str); // 2026/03/03 05:01:02 Tue
    } else {
        printf("Error.");
    }

    return 0;
}
