#include<stdio.h>
int main()
{
    int arr[3][3][3];
    printf("%u %u %u\n",arr, arr+1, arr+2);
    printf("%u %u %u\n",arr[0], arr[0]+1, arr[0]+2);
    printf("%u %u %u\n",arr[1][1], arr[1][1]+1, arr[1][1]+2);
}
/**
* arr[3][3][3] = {
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
                    }
}


    printf("%u %u %u\n",arr, arr+1, arr+2);
    printf("%u %u %u\n",arr[0], arr[0]+1, arr[0]+2);
    printf("%u %u %u\n",arr[1][1], arr[1][1]+1, arr[1][1]+2);

    Important note &arr points to complete array whereas arr points to 1st element of the array    
    for the given array arr will point toi base address of complete 3d array. i.e. address of 0th element of 2D array or 0th element of 1D array or 0th element of complete array
    for the given array arr+1 will point to base address of 1st 2D array starting at 10 
    for the given array arr+2 will point to base address of 1st 2D array starting at 19
    for the given array arr[0] will point to 0th 2D array i.e. with stating index of 1
    for the given array arr[0]+1 will point to 1st element in the 2D array i.e. 1st 1D array starting index of 4
    for the given array arr[0]+2 will point to 2nd element in the 2D array i.e. 2ns 1D array starting index of 7
    for the given array arr[1][1] will point to 1st 1D array starting with index of 10
    for the given array arr[1][1]+1 will point to next element of 1st 1D array starting with index of 11 
    for the given array arr[1][1]+2 will point to next element of 1st 1D array starting with index of 12  
*/
