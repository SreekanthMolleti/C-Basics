#include<stdio.h>
int main()
{
	float cel,fah;
	printf("enter the celsius :");
	scanf("%f",&cel);
	fah=(cel*1.8)+32;
	printf("fahrenheit is : %0.2f",fah);
	return 0;
}
