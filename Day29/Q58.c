/*Q58 (Arrays (1D))
Find the maximum and minimum element in an array.*/
#include <stdio.h>

void findMinMax(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    int i;
    for ( i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[] = {5, 2, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMinMax(arr, n, &max, &min);

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}

