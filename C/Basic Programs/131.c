/*WAP to find size of int or float type in the system without using sizeof() function.*/
#include<stdio.h>
int main()
{
	int *ptr1,*ptr2,k,s;
	ptr1=&k;
	ptr2=ptr1+1;
	s=(char*)ptr2-(char*)ptr1;
	printf("Size of int: %d",s);
	return 0;
}
