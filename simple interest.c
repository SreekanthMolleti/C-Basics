#include<stdio.h>
int main()
{
	int p,n;
	float t,r,si;
	printf("when principle amount is:");
	scanf("%d",&p);
	printf("when rate of interest is:");
	scanf("%f",&r);
	printf("when time period is:");
	scanf("%f",&t);
	n=p*t*r/100;
	printf("simple interest is %d",n);
}

	
