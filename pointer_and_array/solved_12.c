#include<stdio.h>
int main()
{
    int a[]={2,4,6,8,10};
    
    for(int i=0; i<=4; i++)
    {
        *(a+i) = a[i] + i[a];
        printf("%d\t",*(i+a));
    }
    printf("\n");
    return 0;
}

/**
* Here different ways of represnting the 0th element of array a is shown. *(a+i)=a[i]=i[a]=*(i+a)
*/
