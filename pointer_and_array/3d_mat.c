/**
* 4 Ways to define and return matrix ointers in C
*/
#define SET 2
#define ROW 3
#define COL 3

#include<stdio.h>
int *fun1();
int (*fun2())[COL];
int (*fun3())[ROW][COL];
int (*fun4())[SET][ROW][COL];

int main()
{
    printf("using int *\n");
    int *a = fun1();
    
    for(int i=0; i<SET; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t",*(a+i*ROW*COL+j*COL+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("using int *[]\n");

    int (*b)[COL];
    b = fun2();
    int *p;
    for(int i=0; i<SET; i++)
    {
        p =(int (*))(((int *)b)+i*ROW*COL);
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t", *(p+j*COL+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("using int *[][]\n");
    
    int (*c)[ROW][COL]= fun3();
    int (*q)[ROW][COL];
    for(int i=0; i<SET; i++)
    {
        q = c+i;
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t", (*q)[j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    printf("using int *[][][]\n");
    int (*d)[SET][ROW][COL] = fun4();
    
    for(int i=0; i<SET; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t", (*d)[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
   
    return 0; 
}

int *fun1(void)
{
    static int arr[SET][ROW][COL]=  {
                        {
                            {1,2,3},
                            {4,5,6},
                            {7,8,9},
                        },
                        {
                            {9,8,7},
                            {6,5,4},
                            {3,2,1},
                        }
                    };

    for(int i=0; i<SET; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return (int (*))arr;
}

int (*fun2())[COL]
{
    static int arr[SET][ROW][COL]=  {
                        {
                            {1,2,3},
                            {4,5,6},
                            {7,8,9},
                        },
                        {
                            {9,8,7},
                            {6,5,4},
                            {3,2,1},
                        }
                    };

    for(int i=0; i<SET; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return (int (*)[COL])arr;
   
}

int (*fun3())[ROW][COL]
{
    static int arr[SET][ROW][COL]=  {
                        {
                            {1,2,3},
                            {4,5,6},
                            {7,8,9},
                        },
                        {
                            {9,8,7},
                            {6,5,4},
                            {3,2,1},
                        }
                    };

    for(int i=0; i<SET; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return (int (*)[ROW][COL])arr;
}

int (*fun4())[SET][ROW][COL]
{
    static int arr[SET][ROW][COL]=  {
                        {
                            {1,2,3},
                            {4,5,6},
                            {7,8,9},
                        },
                        {
                            {9,8,7},
                            {6,5,4},
                            {3,2,1},
                        }
                    };

    for(int i=0; i<SET; i++)
    {
        for(int j=0; j<ROW; j++)
        {
            for(int k=0; k<COL; k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return (int (*)[SET][ROW][COL])arr;
}
