/*Pointer to Function*/
#include<stdio.h>
int square(int a)
{
	return a*a;
}
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	int (*ptr)(int);
	ptr=&square;
	printf("Square of %d = %d",n,ptr(n));
	return 0;
}
