/*WARF to find b^n.*/
#include<stdio.h>
int power(int b,int n)
{
	if(n==0)
		return 1;
	else
		return (b*power(b,n-1));
}
int main()
{
	int b,n,x;
	printf("Enter an integer and its power: ");
	scanf("%d%d",&b,&n);
	x=power(b,n);
	printf("%d ^ %d = %d",b,n,x);
	return 0;
}
