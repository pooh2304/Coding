/*WARF to find GCD of two numbers.*/
#include<stdio.h>
int gcd(int a,int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	else
		return(gcd(a,b-a));
}
int main()
{
	int n1,n2,hcf;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	hcf=gcd(n1,n2);
	printf("GCD of %d and %d: %d",n1,n2,hcf);
	return 0;
}
