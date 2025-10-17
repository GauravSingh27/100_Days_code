/*Q108 (Logic Enhancers)
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/
#include <stdio.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    int prefix[n], suffix[n];
    int i;
    prefix[0] = 1;
    for ( i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    suffix[n - 1] = 1;
    for ( i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for ( i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }
}

int main() {
    int n,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d elements: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    productExceptSelf(nums, n, answer);

    printf("Result: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    
    return 0;
}

