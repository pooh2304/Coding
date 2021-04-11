/*Binary Search*/
#include<stdio.h>
int main()
{
	int n,i,key,flag=0;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter element to search:");
	scanf("%d",&key);
	int min=0,max=n-1,mid;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(key==arr[mid])
		{
			printf("Element found at index %d",mid);
			flag=1;
			break;
		}
		else if(key<arr[mid])
			max=mid+1;
		else
			min=mid+1;
	}
	if(flag==0)
		printf("Element not found");
	return 0;
}
