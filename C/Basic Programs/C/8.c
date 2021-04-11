/*WAP to check whether a character is uppercase or lowercase alphabet.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
		printf("Uppercase Alphabet");
	else if(ch>=97&&ch<=122)
		printf("Lowercase Alphabet");
	else
		printf("Not an Alphabet");
	return 0;
}

