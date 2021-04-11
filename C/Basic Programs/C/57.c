/*WAP to check whether a number is strong or not.*/
#include<stdio.h>
int main()
{
	int num,temp,r,s=0,i,f;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		r=temp%10;
		f=1;
		for(i=r;i>=1;i--)
			f*=i;
		s+=f;
		temp/=10;
	}
	if(num==s)
		printf("Strong Number");
	else
		printf("Not a Strong Number");
	return 0;
}
