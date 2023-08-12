#include<stdio.h>
int main()
{
    float r,a;
    const float PI=3.14;
    printf("Enter radius : ");
    scanf("%f",&r);
    a = PI *r *r;
    printf("Ara of the circle is %f\n", a);
    return 0;
}
