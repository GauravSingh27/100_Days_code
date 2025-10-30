/*Q117 (Logic Enhancers)
Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted.Print the merged array.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,k,m,l,n;
    printf("Enter size of first array: ");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(m * sizeof(int));
    printf("Enter %d sorted elements for first array:\n", m);
    for( i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int *arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter %d sorted elements for second array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int *merged = (int *)malloc((m + n) * sizeof(int));

    i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array:\n");
    for ( l = 0; l < m + n; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}

