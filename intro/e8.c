#include<stdio.h>
int main()
{
	int i = 10, j = 20, diff;
	diff = &j - &i;
	printf("address of i is %u address of j is %u\n", &i, &j);
	printf("difference of address of i and j is %d\n",diff);
	return 0;
	
}
