/*WAP to enter a character in capital letter and convert it into small letter.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any capital alphabet:");
	scanf("%c",&ch);
	ch=ch+32;
	printf("%c",ch);
	return 0;
}
