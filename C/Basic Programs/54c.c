/*WAF to find GCD of two numbers using Euclidean Algorithm.*/
#include<stdio.h>
int gcd(int a,int b)
{
	int temp;
	while(b>0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
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
