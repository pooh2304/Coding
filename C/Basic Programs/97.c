/*WAP to count total number of even and odd elements in an array.*/
#include<stdio.h>
int main()
{
	int n,i,even=0,odd=0;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			even++;
		else
			odd++;	
	}
	printf("Even elements: %d\nOdd elements: %d",even,odd);
	return 0;
}
