#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4};
    int *p, i;
    for(p=arr,i=0; p+i <= arr+4; p++, i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\n");
    return 0;
}

/*
* Point to be noted is that *p and *(p+i) is not same and *(p+i) in this specific scenario skips the alternate
* element
*/

