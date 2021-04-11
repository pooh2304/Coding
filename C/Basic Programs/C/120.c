/*WAF to find multiplicative persistence of a given number.*/
#include<stdio.h>
int multiPersist(int n)
{
	int p,r,c=0;
	while(n>9)
	{
		p=1;
		while(n>0)
		{
			r=n%10;
			p=p*r;
			n=n/10;
		}
		n=p;
		c++;
	}
	return c;
}
int main()
{
	int num,m;
	printf("Enter a number: ");
	scanf("%d",&num);
	m=multiPersist(num);
	printf("Multiplicative Persistence of %d: %d",num,m);
	return 0;
}
