/*Q21 (Conditional Statements)
Write a program to display the month name and number of days using switch-case for a given month number.*/
#include<stdio.h>

int main()
{
    int choise;
    printf("\n enter the month number : ");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: printf("Month is :  January\n");
                printf("Number of days:  31");
                break;
        case 2: printf("Month is :  February\n");
                printf("Number of days:  28");
                break;
        case 3: printf("Month is :  March\n");
                printf("Number of days:  31");
                break;
        case 4: printf("Month is :  April\n");
                printf("Number of days:  30");
                break;
        case 5: printf("Month is :  May\n");
                printf("Number of days:  31");
                break;
        case 6: printf("Month is :  June\n");
                printf("Number of days:  31");
                break;
        case 7: printf("Month is :  July\n");
                printf("Number of days:  30");
                break;
        case 8: printf("Month is :  August\n");
                printf("Number of days:  31");
                break;
        case 9: printf("Month is :  September\n");
                printf("Number of days:  30");
                break;
        case 10: printf("Month is :  October\n");
                printf("Number of days:  31");
                break;
        case 11: printf("Month is :  November\n");
                printf("Number of days:  30");
                break;
        case 12: printf("Month is :  December\n");
                printf("Number of days:  31");
                break;
        default : printf("invalid number");
    }


}
