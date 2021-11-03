#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number of hours:");
	scanf("%d",&a);
	printf("enter the number of minutes:");
	scanf("%d",&b);
	c=a*60;
	c=c+b;
	printf("number of minutes %d",c);
}
