#include<stdio.h>
int main()
{
    int a[3][3] = {
                    12,56,45,
                    85,65,20,
                    80,48,17,
                    };
    for(int i=2; i>=0; i--)
    {
        for(int j=2; j>=0; j--)
        {
            printf("%d %d\t", a[i][j], *(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}
/*
* Demonstration of the printing of array elements in the reverse using pointer as well as [][]
*/
