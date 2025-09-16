/*Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/

#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    int numerator = 2, denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator; 
        numerator += 2; 
        denominator += 4; 
    }

    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}

