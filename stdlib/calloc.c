#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 8;
    int *arr = calloc(number, sizeof(int));

    for (int i=0; i<number; i++) {
        arr[i] = i + 1;
    }

    for (int j=0; j<number; j++) {
        printf("%d ", arr[j]);  // 1 2 3 4 5 6 7 8
    }

    free(arr);
    arr = NULL;

    return 0;
}
