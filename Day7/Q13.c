/*Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a year:");
	scanf("%d",&n);
	if (n%4 ==0){
		printf("%d is a leap year.\n",n);
		}else{
			printf("%d is not a leap year.\n",n);
		}
	return 0;
}
