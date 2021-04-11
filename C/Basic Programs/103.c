/*WAP to convert Decimal to Hexadecimal number system.*/
#include<stdio.h>
int main()
{
	int dec,rem,i=0,j;
	char hex[100];
	printf("Enter decimal number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		rem=dec%16;
		if(rem<10)
			hex[i]=rem+48;
		else
			hex[i]=rem+55;
		dec/=16;
		i++;
	}
	printf("Hexadecimal number: ");
	for(j=i-1;j>=0;j--)
		printf("%c",hex[j]);
	return 0;
}
