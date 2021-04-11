/*Linear Search*/
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
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Element found at position %d\n",i+1);
			flag=1;
		}	
	}
	if(flag==0)
		printf("Element not found");
	return 0;
}
