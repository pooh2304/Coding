/*WAP to convert Decimal to Binary number system using array.*/
#include<stdio.h>
int main()
{
	int dec,i=0,j,bin[100];
	printf("Enter decimal number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		bin[i]=dec%2;
		dec/=2;
		i++;
	}
	printf("Binary number: ");
	for(j=i-1;j>=0;j--)
		printf("%d",bin[j]);
	return 0;
}
