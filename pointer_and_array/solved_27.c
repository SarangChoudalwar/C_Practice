#include<stdio.h>
int main()
{
    static int a[3][3]={ 
                    1,2,3,
                    4,5,6,
                    7,8,9,  
                    };
    static int *ptr[3] = {a[0],a[1], a[2]};
    int **ptr1 = ptr;

    printf("\n");
    for(int i=0; i<=2; i++)
    {
        printf("%d\t", *ptr[i]);
    }
    printf("\n");
    for(int i=0; i<=2; i++)
    {
        printf("%d\t", *a[i]);
    }
    printf("\n");
    for(int i=0; i<=2; i++)
    {
        printf("%d\t", **ptr1);
        ptr1++;
    }
}

/*
* Demonstration of the double pointer with array of pointers
*/
