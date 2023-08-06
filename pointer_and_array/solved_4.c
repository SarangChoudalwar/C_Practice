#include<stdio.h>
int main()
{
    int b[]={10,20,30,40,50};
    int i,*k;
    k = &b[4]-4;
    
    for(i=0;i<=4;i++)
    {
        printf("%d\t",*k);
        k++;
    }
    
    printf("\n");
    return 0;
}
/**
* In this context b[4]-4 is same as address of 50 - sizeof(int)*4 which will come out as address of 10
* Hence the expectation is it will print 10,20,30,40,50
*/ 
