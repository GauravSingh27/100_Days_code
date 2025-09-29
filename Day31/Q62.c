/*Q62 (Arrays (1D))
Reverse an array without taking extra space.*/
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    printf("Reversed array: ");
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

