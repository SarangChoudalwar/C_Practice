#include<stdio.h>
void f(int x, int *y);
int main()
{
    int a[]={2,4,6,8,10};
    int b = 5;    
    for(int i=0; i<=4; i++)
    {
        f(a[i],&b);
        printf("%d %d\n",a[i],b);
    }
    printf("\n");
    return 0;
}

void f(int x, int *y)
{
    x = *(y) += 2;
}
/**
* Here it should be noted that the b value is indirectly modified and during each iteration its value woul
* be 5,7,9,11,13,15. 
*/
