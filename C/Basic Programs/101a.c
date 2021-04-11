/*WAP to convert Decimal to Binary number system.*/
#include<stdio.h>
int main()
{
	int dec,bin=0,rem,place=1;
	printf("Enter decimal number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		rem=dec%2;
		bin=bin+(rem*place);
		dec/=2;
		place*=10;
	}
	printf("Binary number: %d",bin);
	return 0;
}
