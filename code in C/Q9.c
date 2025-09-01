/*Q9 (User Inputs,Operations & Output)
Write a program to calculate simple and compound intrest for the given principle, rate, and time.*/
#include<stdio.h>
#include<math.h>
int main()
{
	double R,SI,T,P,CI,r;
	int n;
	printf("Enter Principle amount:");
	scanf("%lf",&P);
	printf("Enter RATE of intrest :");
	scanf("%lf",&R);
	printf("Enter TIME in years:");
	scanf("%lf",&T);
	printf("Enter Frequency:");
	scanf("%lf",&n);
	r=R/100;
	SI = (P*r*T);
	CI = P*pow((1 + (r/n)),(n*T));
	printf("The Simple Intrest is:%lf\n",SI);
	printf("The Compound Intrest is:%.2lf\n",CI);
	return 0;
}
