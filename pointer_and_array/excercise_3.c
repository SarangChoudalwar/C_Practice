#include<stdio.h>
void print(int *a,int *b, int *c, int *d, int *e);
int main()
{
    static int arr[] = {97,98,99,100,101,102,103,104};
    int *ptr = (arr+1);
    
    print(++ptr, ptr--, ptr, ptr++, ++ptr);
    return 0;
}

void print (int *a, int *b, int *c, int *d, int *e)
{
    printf("%d %d %d %d %d ", *a, *b, *c, *d, *e);
}


