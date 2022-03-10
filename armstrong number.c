#include<stdio.h>
int main()
{
	int i,j,sum=0,k;
	scanf("%d",&i);
	k=i;
	while(i>0)
	{
		j=i%10;
		sum=sum+(j*j*j);
		i=i/10;
	}
	if(k==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
