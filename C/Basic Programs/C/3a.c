/*WAP to enter a character in small letter and convert it into capital letter.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any small alphabet:");
	scanf("%c",&ch);
	ch=ch-32;
	printf("%c",ch);
	return 0;
}
