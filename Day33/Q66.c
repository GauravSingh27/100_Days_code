/*Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int insertSorted(int arr[], int n, int key, int capacity) {
    // If array is already full
    if (n >= capacity) {
        printf("Array is full, cannot insert.\n");
        return n;
    }

    int i;

    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key;

    return n + 1;
}

int main() {
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int n = 6;           
    int capacity = 20;   
    int key = 26;        
    printf("Before Insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    n = insertSorted(arr, n, key, capacity);

    printf("\nAfter Insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

