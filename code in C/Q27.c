/*Q27 (Loops without Arrays/Strings)
Write a program to print the the sum of the first n odd numbers.*/
#include <stdio.h>

int main() {
    int n, sum = 0,i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++) {
    if (i%2==1){
    	sum = sum + i;
	}
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}

