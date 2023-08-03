#include<stdio.h>
int power(int **);
int main()
{
	int a = 5, *aa;
	aa = &a;
	a = power(&aa);
	printf("a = %d aa = %u\n", a,aa);
	printf("Expectation is on the same memory location the power of the number would get calculated\n");
	return 0;
}

int power(int **ptr)
{
	int b;
	b = **ptr***ptr;
	return b;
}
