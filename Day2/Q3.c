/*Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include<stdio.h>
int main()
{
	int length,breadth, mul , per;
    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the breadth:");
    scanf("%d", &breadth);

    mul = length * breadth;
    per = 2*(length+breadth);

    printf("Area of Rectangle is: %d\n",mul);
    printf("Perimeter of Rectangle is: %d\n",per);
    printf("thank you");

    return 0;
}


