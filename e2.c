#include<stdio.h>
int main()
{
	char c, *cc;
	int i;
	long l;
	float f;

	c = 'Z';
	i = 15;
	l = 77777;
	f = 3.14;
	cc = &c;
	printf("c = %c cc = %u\n", *cc,cc);
	cc = &i;
	printf("i = %d cc = %u\n", *cc,cc);
	cc = &l;
	printf("l = %ld cc = %u\n", *cc,cc);
	cc = &f;
	printf("f = %f cc = %u\n", *cc,cc);
	printf("Expectation is character pointer will point to first byte of the int, long and float.\n");
	return 0;	
}
