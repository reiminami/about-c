#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *localt;
    char tstr[256];
    size_t result;

    t = time(NULL);
    localt = localtime(&t);
    result = strftime(tstr, 256, "%Y/%m/%d %H:%M:%S %a", localt);

    if (result > 0) {
        printf("%s\n", tstr);
    } else {
        printf("ERROR");
    }
}
