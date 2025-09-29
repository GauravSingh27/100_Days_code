/*Q68 (Arrays (1D))
Delete an element from an array.*/
#include <stdio.h>

int deleteElement(int arr[], int n, int element) {
    int i, pos = -1;

    // Find the position of the element to be deleted
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found in array.\n");
        return n;  // No deletion as element is not found
    }

    // Shift elements to the left from the position of deletion
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;  // New size of array
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 30;
    int i;
    printf("Before deletion: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = deleteElement(arr, n, element);

    printf("After deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

