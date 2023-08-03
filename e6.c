#include<stdio.h>
float *multiply(int,float);
int main()
{
	int i = 3;
	float f =3.5, *prod;
	prod = multiply(i,f);
	printf("prod is %u value at address = %f\n",prod,*prod);
	printf("Expectation is product value will not be same use static for not deleting the variable");
}
float *multiply(int ii, float ff)
{
	float product;
	product = ii * ff;
	printf("product = %d addres of product = %u\n",product, &product);
	return (&product);
}
