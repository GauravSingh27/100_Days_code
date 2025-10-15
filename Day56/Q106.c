/*vQ105 (Logic Enhancers)
Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. 
Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
If there does not exist next greater of current element, then next greater element for current element is -1.
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>
void nextGreaterElements(int arr[], int size)
{   int i,j;
    for ( i = 0; i < size; i++) {
        int nextGreater = -1;
        for ( j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        printf("%d", nextGreater);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int size,i;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    nextGreaterElements(arr, size);

    return 0;
}

