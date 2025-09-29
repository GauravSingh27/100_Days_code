/*Q67 (Arrays (1D))
Insert an element in an array at a given position.*/
#include <stdio.h>

int insertAtPosition(int arr[], int n, int element, int position, int capacity) {
    if (n >= capacity) {
        printf("Array is full, cannot insert element.\n");
        return n;
    }

    if (position < 0 || position > n) {
        printf("Invalid position.\n");
        return n;
    }

    int i;
    for ( i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;

    return n + 1;
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;         
    int capacity = 20;  
    int element = 25;   
    int position = 2;   
    int i;
    printf("Before insertion: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = insertAtPosition(arr, n, element, position, capacity);

    printf("After insertion: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

