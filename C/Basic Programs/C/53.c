/*WAP to find Second Largest number from n numbers.*/
#include<stdio.h>
#include<limits.h>
int main()
{
	int n,num,lar=INT_MIN,slar=INT_MIN,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num>lar)
		{
			slar=lar;
			lar=num;
		}
		else if(num>slar)
			slar=num;
	}
	printf("Second Largest number=%d",slar);
	return 0;
}
