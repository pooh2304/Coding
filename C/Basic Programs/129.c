/*WARF to print first 'n' natural numbers in reverse order.*/
#include<stdio.h>
void reverseNatural(int n)
{
	if(n==0)
		return;
	else
	{
		printf("%d\t",n);
		reverseNatural(n-1);
	}
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	reverseNatural(n);
	return 0;
}
