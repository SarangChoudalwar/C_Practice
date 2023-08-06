#include<stdio.h>
void fun (int **p);
int main()
{
    int a[3][4] =  {
                    1,2,3,4,
                    4,3,2,1,
                    7,8,9,0
                    };
    int *ptr;
    ptr = &a[0][0];
    fun(&ptr);
    return 0;
}

void fun (int **p)
{
    printf("%d\n", **p);
}

/**
* Here **p will point to the first element of the array
*/
