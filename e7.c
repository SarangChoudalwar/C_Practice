#include<stdio.h>
int main()
{
	char *c = 4000;
	int *i = 4000;
	long *l = 4000;
	float *f = 4000;
	double *d = 4000;

	printf("c = %u c+1 = %u\n",c ,c+1);
	printf("i = %u i+1 = %u\n",i ,i+1);
	printf("l = %u l+1 = %u\n",l ,l+1);
	printf("f = %u f+1 = %u\n",f ,f+1);
	printf("d = %u d+1 = %u\n",d ,d+1);
	printf("Expectation is every pointer increment would be according to its type\n");
	return 0;
}
