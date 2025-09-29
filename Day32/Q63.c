/*Q63 (Arrays (1D))
Merge two arrays.*/
#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    int i;
    for ( i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for ( i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

