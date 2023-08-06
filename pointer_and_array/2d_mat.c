#include<stdio.h>
#define ROW 3
#define COL 3

int *fun_1();
int (*fun_2())[COL];
int (*fun_3())[ROW][COL];

int main()
{
    printf("Using int (*)\n");    
    
    int *b;
    b = fun_1();
    
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%d\t",*(b+i*COL+j));
        }
        printf("\n");
    }
    
    printf("\n"); 
    printf("Using int (*)[]\n");    
    
    int (*c)[COL];
    c = fun_2();
    int *d;
    for(int i=0; i<ROW; i++)
    {
        d = (int (*))c+i;
        for(int j=0; j<COL; j++)
        {
            printf("%d\t",*(d+j));
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Using int (*)[][]\n");    
    
    int (*e)[ROW][COL];
    e = fun_3();
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%d\t", (*e)[i][j]);
        }
        printf("\n");
    }
     
}


int *fun_1(void)
{
    static int arr[ROW][COL] = { 
                            1,2,3,
                            4,5,6,
                            7,8,9,
                        };
    
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
    return (int (*))arr;       
}

int (*fun_2())[COL]
{
    static int arr[ROW][COL] = {
                            1,2,3,
                            4,5,6,
                            7,8,9,
                        };
    
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    return (int (*)[COL])arr;
}

int (*fun_3())[ROW][COL]
{
    static int arr[ROW][COL] = {
                            1,2,3,
                            4,5,6,
                            7,8,9,
                        };
    
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    return (int (*)[ROW][COL])arr;
}
