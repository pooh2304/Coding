/*WAP to accept the Principal Amount,Rate of Interest and number of years then find out the Simple Interest.*/
#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter principal amount,rate of interest and number of years:");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("Simple Interest=%f",si);
	return 0;
}
