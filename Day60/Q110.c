/*Q110 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right.
Print the maximum elements for each window separated by spaces as output.*/
#include <stdio.h>
int main() {
    int i,j,n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }
    printf("Maximum elements of each subarray: ");
    for ( i = 0; i <= n - k; i++) {
        int max = arr[i];
        for ( j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}

