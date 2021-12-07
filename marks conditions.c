#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=80)
	{
	printf("A");
    }
    else if(70<=a && a<80)
    {
    	printf("B");
	}
	else if(60<=a && a<70)
	{
		printf("C");
	}
	else if(50<=a && a<60)
	{
		printf("D");
    }
	else
	{
		printf("fail");
	}
	
}
