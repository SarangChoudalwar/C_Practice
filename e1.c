#include <stdio.h>
int main()
{
	int a,*b,**c,***d,****e;

	a=10;
	b=&a;
	c=&b;
	d=&c;
	e=&d;

	printf("a=%d b= %u c=%u d=%u e=%u\n",a,b,c,d,e);
	printf("%d %d %d %d\n",a,a+*b,**c+***d, ***d+****e);
	printf("expected result is cont address seprated by size of int and 10 20 20 20\n");

}
