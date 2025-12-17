#include <stdio.h>

int count_before_zero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 0, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = count_before_zero(arr, size);
    printf("Number of elements before zero: %d\n", count);
    return 0;
}
