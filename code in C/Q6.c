/*Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER NUMBER1 :");
	scanf("%d",&a);
	printf("ENTER NUMBER2 :");
	scanf("%d",&b);
	
	printf("\nBefore swappimg:\n");
	printf("First number = %d\n",a);
	printf("Second number = %d\n",b);
	
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping:\n");
	printf("NUMBER1 = %d\n",a);
	printf("NUMBER2 = %d\n",b);
	return 0;
}
