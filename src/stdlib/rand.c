#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // シード設定
    for (int i=0; i<3; i++) {
        printf("%d\n", rand() % 100 + 1);
    }
}
