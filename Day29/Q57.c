/*Q57 (Arrays (1D))
Find the sum of array elements.*/
#include <stdio.h>
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
int i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);
    return 0;
}

