/*WARF to find GCD of two numbers.*/
#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return(gcd(b,(a%b)));
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
