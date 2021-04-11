/*Merging of two arrays.*/
#include<stdio.h>
int main()
{
	int m,n,i,j,k=0;
	printf("Enter both array size:");
	scanf("%d%d",&m,&n);
	int a[m],b[n],c[m+n];
	printf("Enter %d elements of 1st array: ",m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	printf("Enter %d elements of 2nd array: ",n);
	for(j=0;j<n;j++)
		scanf("%d",&b[j]);
	for(i=0;i<m;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(j=0;j<n;j++)
	{
		c[k]=b[j];
		k++;
	}
	printf("Merged Array: ");
	for(k=0;k<m+n;k++)
		printf("%d  ",c[k]);
	return 0;
}
