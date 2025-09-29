/*Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array.*/
#include <stdio.h>

int main() {
    int arr[] = {2, -4, 0, 5, -1, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive = 0, negative = 0, zero = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Number of positive elements: %d\n", positive);
    printf("Number of negative elements: %d\n", negative);
    printf("Number of zero elements: %d\n", zero);

    return 0;
}

