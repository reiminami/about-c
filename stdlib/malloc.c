#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 8;
    int *arr = malloc(number * sizeof(int));

    for (int j=0; j<number; j++) {
        printf("%d ", arr[j]);
    }

    free(arr);
    arr = NULL;

    return 0;
}
