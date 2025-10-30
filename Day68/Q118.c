/*Q118 (Logic Enhancers)
Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one.
Print that missing number*/
#include <stdio.h>
int main() {
    int n, i, sum = 0, missing;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers (from 0 to n, with one missing):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    missing = (n * (n + 1)) / 2 - sum;
    printf("The missing number is: %d\n", missing);
    return 0;
}

