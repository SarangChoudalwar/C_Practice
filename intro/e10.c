#include<stdio.h>
int main()
{
	int i=10;
	printf("value of i is %d address of i is %u\n",i ,&i);
	&i=7300;
	printf("new value of i is %d address of i is %u\n", i, &i);
	return 0;
}
