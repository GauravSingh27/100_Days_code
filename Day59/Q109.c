/*Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>
int maxSubarraySum(int arr[], int n, int k) {
    if (n < k) {
        printf("Invalid input: subarray size greater than array size.\n");
        return -1;
    }

    int i,windowSum = 0, maxSum = 0;
    for ( i = 0; i < k; i++)
        windowSum += arr[i];
    maxSum = windowSum;
    for ( i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    return maxSum;
}

int main() {
    int n, k,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int result = maxSubarraySum(arr, n, k);
    if (result != -1)
        printf("Maximum sum of subarray of size %d = %d\n", k, result);

    return 0;
}

