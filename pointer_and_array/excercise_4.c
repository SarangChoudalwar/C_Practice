#include<stdio.h>
int main()
{
    int a[3][3][2]= {
                        {
                            1,2,
                            3,4,
                            5,6 
                        },
                        {
                            3,4,
                            1,2,
                            5,6 
                        },
                        {
                            5,6,
                            3,4,
                            1,2 
                        },
                    };

    printf("%d %d %d\n", *(*(a[0]+2)+1),
                         *(*(*(a+2)+1)+1), *(a[1][2]+1));
    return 0;
}
/*
* Expected output is 6,4,6
*/
