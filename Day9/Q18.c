/*Q18 (Conditional Statements)
Write a program to assign grades based on a percentage input.*/
#include<stdio.h>
int main()
{
	double n;
	printf("Enter percentage:");
	scanf("%if",&n);
	if (n>=60){
	printf("Grade F");}
	else if (n<=50 && n>=60)
	{printf("Grade E");}
	else if (n<=60 && n>=70)
	{printf("Grade D");}
	else if (n<=70 && n>=80)
	{printf("Grade C");}
	else if (n<=80 && n>=90)
	{printf("Grade B");}
    else{
	printf("Grade A");}
	return 0;
	
}
