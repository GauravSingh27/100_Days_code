/*Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else.*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	printf("Enter number3:");
	scanf("%d",&c);
    if (a >= b && a >= c)
	{
		printf("%d is largest number.\n");
	}else if (b >= a && b >= c){
		printf("%d is largest number.\n");
	}else{
		printf("%d is largest number.\n");}
	return 0;
}

