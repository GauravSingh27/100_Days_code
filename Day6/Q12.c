/*Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	if (n >= 0) {
		if(n==0){
			printf("The integer is zero.\n");
		}else{
			print0f("The integer is positive.\n");
		}
	}else{
		printf("The integer is negative.\n");
	}
    return 0;
}

