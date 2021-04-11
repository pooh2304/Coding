/*WAP to print all prime factors of a number.*/
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("All prime factors of %d are: ",num);
	while(num%2==0)
	{
		printf("2  ");
		num/=2;
	}
	for(i=3;i*i<=num;i+=2)
	{
		while(num%i==0)
		{
			printf("%d  ",i);
			num/=i;
		}
	}
	if(num>2)
		printf("%d  ",num);
	return 0;
}
