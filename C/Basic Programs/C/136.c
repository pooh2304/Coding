/*Accessing elements beyond array size*/
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i;
	int *ptr;
	ptr=a;
	printf("%u, %d\n",ptr+5,*(ptr+5));
	printf("%u, %d",ptr-1,*(ptr-1));
	return 0;
}
