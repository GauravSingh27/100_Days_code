/*Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include<stdio.h>
int main()
{
	double a,hour,min,sec;
	printf("Enter Time in seconds:");
	scanf("%lf",&a);
	hour = a/3600;
	min = a/60;
	sec = a;
	printf("TIME in h:m:s format:%.2lf:%.2lf:%.2lf",hour,min,sec);
}
