/*Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural number.*/
#include<stdio.h>
int main()
{
	int n;
	long long sum;
	printf("Enter the positive intger(n):");
	scanf("%d",&n);
	if(n<1){
		printf("Please enter a positive integer.\n");
		return 1;
		
	}
    sum = (long long)n*(n+1)/2;
    printf("The sum of the first %d natural number is :%lld\n",n,sum);
    return 0;

}
