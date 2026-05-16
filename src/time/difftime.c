#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    time_t t1;
    time_t t2;
    double diff;

    t1 = time(NULL);

    // 適当な長い処理とか
    sleep(1);

    t2 = time(NULL);

    diff = difftime(t2, t1);
    printf("%f\n", diff);
}
