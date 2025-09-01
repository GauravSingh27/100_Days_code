/*Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>
int main()
{
	int r;
	double a,c;
	printf("Enter radius :");
	scanf("%d",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("The area of the of the circle is :%lf",a);
	printf("The circumference of the circle is :%lf",c);
	return 0;
	
}


