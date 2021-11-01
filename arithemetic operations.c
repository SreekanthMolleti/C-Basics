#include <stdio.h>
int main()
{
 int a,b,c,d,e,f,g,h;
	a=75;
	b=45;
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	h=c+d+e+f+g;
	printf("a=%d \n\nb=%d \n\n",a,b);
	printf("sum of %d and %d is %d\n\n",a,b,c);
	printf("difference between %d and %d is %d\n\n",a,b,d);
	printf("product of %d and %d is %d\n\n",a,b,e);
	printf("quotient when %d divided by %d is %d\n\n",a,b,f);
	printf("remainder when %d is divided by %d is %d\n\n",a,b,g);
	printf("sum of all arithemetic operations is %d\n",h);
}
