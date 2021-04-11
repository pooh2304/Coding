/*Write an UDF to print ‘_’ n times.*/
#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	print(n);
	return 0;
}

void print(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("_\n");
}
