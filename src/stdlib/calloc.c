#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5;
    int *arr = calloc(num, sizeof(int));
    for (int i=0; i<num; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;
}
