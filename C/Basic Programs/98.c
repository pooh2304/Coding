/*WAP to find maximum and minimum element in an array.*/
#include<stdio.h>
int main()
{
	int n,i,max,min;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("Maximum element: %d\nMinimum element: %d",max,min);
	return 0;
}
