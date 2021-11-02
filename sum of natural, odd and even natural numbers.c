#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	a=n*(n+1)/2;
	b=n*(n+1);
	c=n*n;
	printf("sum of first %d natural numbers is %d\n",n,a);
	printf("sum of first %d even natural numbers is %d\n",n,b);
	printf("sum of first %d odd natural numbers is %d",n,c);
	return 0;
}
