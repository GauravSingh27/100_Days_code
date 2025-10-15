/*Q103 (Logic Enhancers)
Write a Program to take an array of integers as input, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
This also applies to the right edge of the array. 
Print the leftmost pivot index. If no such index exists, print -1.*/
#include <stdio.h>
int findPivotIndex(int arr[], int size) {
    int i,totalSum = 0;
    for ( i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for ( i = 0; i < size; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i;  // leftmost pivot index found
        }
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, size);
    printf("%d\n", pivotIndex);

    return 0;
}

