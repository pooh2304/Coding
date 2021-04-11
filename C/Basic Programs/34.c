/*WAP to print all natural numbers in reverse (from n to 1).*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d  ",i);
	}
	return 0;
}
