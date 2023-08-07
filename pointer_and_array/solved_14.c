#include<stdio.h>
void change(int *a);
int main()
{
    int a[5] ={2,3,4,5,6};
    
    change(a);
    
    for(int i=4; i>=0; i--)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}

void change(int *a)
{
    for(int i=0; i<5; i++)
    {
        *a = *a+1;
        a++;
    }
}

/*
* Problem demonstrate way of modifying all the elements of array
*/

