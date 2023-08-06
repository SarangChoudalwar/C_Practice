#include<stdio.h>
int main()
{
	int *i,*j;
	j = i* (int *)(2);
	printf("j = %u\n", j);
	return 0;
}
