/*Q112 (Logic Enhancers)
Write a program to take an integer array arr as input.
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.*/
#include <stdio.h>
int main() {
    int i,n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    int max_sum = arr[0];  
    int current_sum = arr[0];

    for ( i = 1; i < n; i++) {
        if (current_sum > 0)
            current_sum += arr[i];
        else
            current_sum = arr[i];
        if (current_sum > max_sum)
            max_sum = current_sum;
    }
    printf("Maximum Subarray Sum: %d\n", max_sum);
    return 0;
}

