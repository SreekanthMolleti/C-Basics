#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	a=a%2;
	switch(a)
	{
		case 0:
		printf("number is even");
		break;
		case 1:
		printf("number is odd");
		break;
	}
}
