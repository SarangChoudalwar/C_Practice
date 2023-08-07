#include<stdio.h>
int main()
{
    int a[3][2][4]={
                        {
                            {1,2,3,4},
                            {4,3,2,1},
                        },
                        {
                            {4,5,6,7},
                            {7,6,5,4},
                        },
                        {
                            {9,8,7,6},
                            {6,7,8,9},
                        },
                    };
    printf("%d %d\n", a[2][1][3], *(*(*(a+2)+1)+3));
    return 0;
}
/**
*Demonstration on printing element of 3D array using pointer or [][][]
* when defining the array [3][2][1] specifies the size of array which starts  at 1
* when printing the array [3][2][1] specifies the element of the array which starts at 0
*/
