#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5;
    int *arr = malloc(num * sizeof(int));
    for (int i=0; i<num; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;
}
