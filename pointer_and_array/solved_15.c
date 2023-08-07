#include<stdio.h>
int main()
{
    int arr[] = {0,1,2,3,4};
    int *ptr;
    for(ptr = &arr[0]; ptr<=&arr[4]; ptr++)
    {
        printf("%d\t",*ptr);
    }
    printf("\n");
    return 0;
}

/*
* Demonstration of pointer and array address. ptr++ moves to next integer as its a int pointer
*/
