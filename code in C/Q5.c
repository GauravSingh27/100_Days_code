/*Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
	float c,f;
	printf("ENTER THE TEMPERATURE IN CELSIUS: ");
	scanf("%f",&c);
	f = (1.8*c)+32;
	printf("Temparture in Fahrenheit:%.2f\n",f);
	return 0;
}


