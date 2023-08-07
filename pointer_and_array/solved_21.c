#include<stdio.h>
int main()
{
    static int arr[] = {1,2,3,4,5,6};
    static int *pArr[] = {arr, arr+1, arr+2, arr+3, arr+4, arr+5, arr+6};
    int **ptr = pArr;
    
    printf("%u %d\n",arr, *arr);
    printf("%u %u %d\n",pArr, *pArr, **pArr);
    printf("%u %u %d\n",ptr, *ptr, **ptr);
    return 0;
}

/**
* Demonstration of the array of pointers and their address
*/
