#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    int xd = x < y;
    int yd = y < x;
    return yd - xd;
}

int main() {
    int nums[] = {4, 3, 2, 9, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    qsort(nums, n, sizeof(int), compare);
    for (int i=0; i<n; i++) {
        printf("%d ", nums[i]);
    }
}
