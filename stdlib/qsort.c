#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    int xx = x < y;
    int yy = x > y;
    return yy - xx;
}

int main() {
    int arr[] = {4, 3, 2, 9, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, arr_size, sizeof(int), compare);

    for (int i=0; i<arr_size; i++) {
        printf("%d ", arr[i]);
    }
}
