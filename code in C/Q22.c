/*Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.*/
#include<stdio.h>
int main()
{
	float CP,SP,profit,Loss,percentage;
	printf("Enter the cost price:");
	scanf("%f",&CP);
	printf("Enter the sell price:");
	scanf("%f",&SP);
	if(SP>CP)
	{ profit = SP - CP;
        percentage = (profit / CP) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", percentage);
	}else if ( CP > SP) {
        Loss = CP - SP;
        percentage = (Loss / CP) * 100;
        printf("Loss: %.2f\n", Loss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");}
    return 0;
}

