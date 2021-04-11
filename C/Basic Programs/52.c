/*WAP to find the Largest of N numbers.*/
#include<stdio.h>
#include<limits.h>
int main()
{
	int n,num,max=INT_MIN,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(max<num)
			max=num;
	}
	printf("Largest number=%d",max);
	return 0;
}
