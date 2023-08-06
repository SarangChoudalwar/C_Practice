#include<stdio.h>
int main()
{
    int a[3][4] =  {
                    1,2,3,4,
                    4,3,2,1,
                    7,8,9,0
                    };
    printf("%u %u \n", a+1,&a+1);
    
}

/**
* Here a+1 will be pointing to next address of integer in the 3*4 matrix i.e. it is pointing to a[1] but 
* &a+1 will be pointing to next array of 3*4
*/
