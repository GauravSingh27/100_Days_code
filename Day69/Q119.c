/*Q119 (Logic Enhancers)
Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>
int main()
{
    int n, i, repeated = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], freq[n+1]; 
    for ( i = 0; i <= n; i++) freq[i] = 0;

    printf("Enter %d integers (1 to n, possibly with one repeated):\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            repeated = arr[i];
            break;
        }
    }

    if (repeated != -1) {
        printf("The repeated element is: %d\n", repeated);
    } else {
        printf("No repeated elements\n");
    }

    return 0;
}

