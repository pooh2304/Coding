/*WAP to print all armstrong numbers between 1 to n.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,t,c,num,r,sum,j;
	printf("Enter n:");
	scanf("%d",&n);
	printf("All Armstrong numbers from 1 to %d are: ",n);
	for(i=1;i<=n;i++)
	{
		t=i;
		c=0;
		sum=0;
		while(t>0)
		{
			t/=10;
			c++;
		}
		num=i;
		while(num>0)
		{
			r=num%10;
			sum=sum+pow(r,c);
			num/=10;
		}
		if(i==sum)
			printf("%d\t",i);
	}
	return 0;
}
