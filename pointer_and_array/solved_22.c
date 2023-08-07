#include<stdio.h>
int main()
{
    static int a[]={10,20,30,40,50};
    static int *p[]={a,a+1,a+2,a+3,a+4,a+5};
    
    int **ptr = p;
    ptr++;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);
    
    *ptr++;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);
    
    *++ptr;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

    ++*ptr;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);
    
    return 0; 
}
/**
* Demonstration of certain confusing way of pointers for **ptr ptr++, *ptr++, *++ptr are kind of same.
    For  ++*ptr the value actually gets incremented hence different result
*/
