/*WARF to find GCD of ‘n’ numbers in an array.*/
#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else 
		return (gcd(b,a%b));
}
int findGCD(int a[],int n)
{
	int result=a[0],i;
	for(i=1;i<n;i++)
	{
		result=gcd(result,a[i]);
		if(result==1)
			return 1;
	}
	return result;
}
int main()
{
	int n,i,gcd;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	gcd=findGCD(a,n);
	printf("GCD = %d",gcd);
	return 0;
}
