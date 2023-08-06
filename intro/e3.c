#include<stdio.h>
void swap(int, int);
void change(int, int);

int main()
{
	int c=10,d=20;

	printf("We are in main()...\n");
	printf("Address of c =%u address of d is %u\n",&c ,&d);
	printf("Before swap(), c = %d d=%d \n",c, d);
	swap(c,d);
	printf("back to main()...\n");
	printf("After swap(), c = %d , d=%d\n",c, d);
	printf("Expectation is all the local functions will keep a seprate copy of the variables and prints will be according to that \n");
	return 0;
}

void swap(int c, int d)
{
	printf("We are in swap()...\n");
	printf("Address of c =%u address of d is %u\n",&c ,&d);
	printf("Before change(), c = %d d=%d \n",c, d);
	change(c,d);
	printf("back to swap()...\n");
	printf("After change(), c = %d , d=%d\n",c, d);
}

void change(int c, int d)
{
	int t;
	printf("We are in change()...\n");
	printf("Address of c =%u address of d is %u\n",&c ,&d);
	printf("Before inter-change, c = %d d=%d \n",c, d);
	t = c;
	c = d;
	d = t;
	printf("After inter-change, c = %d , d=%d\n",c, d);
}

