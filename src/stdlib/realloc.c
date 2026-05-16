#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5;
    int *arr = malloc(num * sizeof(int));
    for (int i=0; i<num; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    num = 10;
    arr = realloc(arr, num * sizeof(int));  // realloc
    for (int i=0; i<num; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;
}
