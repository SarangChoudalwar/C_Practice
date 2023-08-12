#include<stdio.h>
int main()
{
    static int a[3][3][3]= {
                                {
                                    1,2,3,
                                    4,5,6,
                                    7,8,9
                                },
                                {
                                    10,11,12,
                                    13,14,15,
                                    16,17,18 
                                },
                                {
                                    19,20,21,
                                    22,23,24,
                                    25,26,27
                                },
                            };
    static int *ptr[] = {
                            a[0][0],a[0][1],a[0][2],
                            a[1][0],a[1][1],a[1][2],
                            a[2][0],a[2][1],a[2][2],
                        };

    int *ptr1[] = {a[0],a[1],a[2]};
    int **ptr2 = ptr, i;

    printf("\n");
    
    for(i=0; i<=8; i++)
    {
        printf("%d\t", *ptr2);
        ptr2++;
    }

    printf("\n");
    
    for(i=0; i<=2; i++)
    {
        printf("%d\t", *(ptr1[i]));
    }

    printf("\n");
    for(i=0; i<=8; i++)
    {
        printf("%d\t", *(ptr[i]));
    }
    printf("\n");
    
    return 0;
}
