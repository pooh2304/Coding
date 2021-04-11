/*WAP to print Sum of the Positive and Negative numbers from given set of numbers. (Until pressed zero)*/
#include<stdio.h>
int main()
{
	int psum=0,nsum=0,num;
	printf("Enter numbers to find their sum:");
	scanf("%d",&num);
	while(num!=0)
	{	
		if(num>0)
			psum=psum+num;
		else
			nsum=nsum+num;
		scanf("%d",&num);
	}
	printf("Positive Sum=%d\nNegative Sum=%d",psum,nsum);
	return 0;
}
