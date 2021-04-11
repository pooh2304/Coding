/*WAP to convert Decimal to Octal number system.*/
#include<stdio.h>
int main()
{
	int dec,oct=0,rem,place=1;
	printf("Enter decimal number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		rem=dec%8;
		oct=oct+(rem*place);
		dec/=8;
		place*=10;
	}
	printf("Octal number: %d",oct);
	return 0;
}
