/*Write an UDF to print ‘#’, char and ‘-’ n times.*/
#include<stdio.h>
void print(int,char);
int main()
{
	print(6,'#');
	print(45,'c');
	print(20,'-');
	return 0;
}

void print(int n, char ch)
{
	int i;
	for(i=0;i<n;i++)
		printf("%c",ch);
	printf("\n");
}
