#include <stdio.h>
#include <time.h>

int main() {
    time_t t1;
    time_t t2;
    double diff;

    t1 = time(NULL);

    /*
    適当な処理
    */

    t2 = time(NULL);

    diff = difftime(t1, t2);
    printf("%f\n", diff);

    return 0;
}
