#include<stdio.h>
void swap(int *, int *);
void exchange(int **, int *);

int main()
{
	int c = 10, d = 20;
	printf("Before swap, c=%d d=%d\n",c,d);
	swap(&c,&d);
	printf("After swap, c=%d d=%d\n",c,d);
	printf("Expectation is number will get exchange important point to note is the use of double pointer\n");
	return 0;
}

void swap(int *cc, int *dd)
{
	exchange(&cc,dd);
}

void exchange(int **cc, int *dd)
{
	int t;
	t = **cc;
	**cc = *dd;
	*dd = t;
}
