#include<stdio.h>
int main()
{
    int n[3][3] = {
                    12,13,14,
                    16,15,14,
                    90,56,26
                  };
    printf("%u %u %d\n", n, n[2], n[2][2]);
    return 0;
}
/**
* Demonstration of the address of 2D array
*/
