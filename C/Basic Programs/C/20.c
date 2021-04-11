/*WAP to perform calculation of 2 number using switch. Like enter 2 number and an operator(+,-,*,/,%) which print the result based on operator.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,result;
	char ch;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter operator:");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			result=a/b;
			break;
		case '%':
			result=a%b;
			break;
		default:
			printf("Invalid operator");
			exit(0);
	}
	printf("Result=%d",result);
	return 0;
}
