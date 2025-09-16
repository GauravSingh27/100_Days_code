/*Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include<stdio.h>
int main()
{
	int no1,no2,sum,diff,prod;
	float quot;
	printf("ENTER NUMBER1:");
	scanf("%d",&no1);
	printf("ENTER NUMBER2:");
	scanf("%d",&no2);
	sum =no1+no2;
	diff =no1-no2;
	prod = no1*no2;
	quot = no1 / no2;
    printf("The sum of %d and %d is :%d\n",no1,no2,sum);
    printf("The diff of %d and %d is :%d\n",no1,no2,diff);
    printf("The product of %d and %d is :%d\n",no1,no2,prod);
    printf("The quatient of %d and %d is :%lf",no1,no2,quot);
    return 0;
}

