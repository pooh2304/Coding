/*WAP to check whether a year is leap year or not.*/
#include<stdio.h>
int main()
{
	int y;
	printf("Enter any year to check leap year:");
	scanf("%d",&y);
	if((y%4==0)&&(y%100!=0)||(y%400==0))
		printf("Leap Year");
	else
		printf("Not a Leap Year");
	return 0;
}
