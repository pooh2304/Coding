/*WAF to convert an integer into binary or octal.*/
#include<stdio.h>
int binOct(int n,int b)
{
	int r,place=1,ans=0;
	while(n>0)
	{
		r=n%b;
		ans=ans+(r*place);
		n/=b;
		place*=10;
	}
	return ans;
}
int main()
{
	int num,base,x;
	printf("Enter an integer: ");
	scanf("%d",&num);
	printf("Enter base to convert: ");
	scanf("%d",&base);
	x=binOct(num,base);
	printf("Result: %d",x);
	return 0;
}


