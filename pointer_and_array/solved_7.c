#include<stdio.h>
int main()
{
    int arr[]= {12, 14, 15, 55, 23, 45};
    printf("%u %u\n", arr, &arr);
    printf("%u %u\n", arr+1, &arr+1);
    return 0;
}
/*
* Here arr and &arr both are pointing to base address of the array, but when arr+1 is getting printed 
* it will be treated as 1st element of the array address whereas the &arr+1 will be treated as address
* pointed to next array after the sizeof(arr) gets over
*/
