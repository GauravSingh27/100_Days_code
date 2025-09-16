/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int hasEven = 0; // Flag to check if there are any even numbers

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    else
        printf("There are no even numbers between 1 and %d.\n", n);

    return 0;
}

