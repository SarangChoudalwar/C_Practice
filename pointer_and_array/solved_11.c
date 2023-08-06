#include<stdio.h>
void fun (int **p);
int main()
{
    int a[2][3][4] =  {
                        {
                            1,2,3,4,
                            4,3,2,1,
                            7,8,9,0,
                        },
                        {
                            9,6,3,8,
                            8,5,2,2,
                            7,4,1,4,
                        }
                      };
    printf("%u %u %u %d\n",a,*a,**a,***a);
    return 0;
}


/**
* Here a points to base address of matrix [2][3][4], *a points to address of [3][4], **a points to address
* of [4], ***a points to value of [0][0][0] i.e.1 
*/
