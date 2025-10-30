/*Q111 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs.
The task is to find the first negative integer in each subarray of size k moving from left to right.
If no negative exists in a window, print "0" for that window.
Print the results separated by spaces as output.*/
#include <stdio.h>

int main() {
    int i,j,n,k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);
    for ( i = 0; i <= n - k; i++) {
        int found = 0;
        for ( j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }
   return 0;
}

