/**
* Find expected output
*/

#include<stdio.h>
int main()
{
    int a[] = {10,20,30};
    
    for(int j=0; j<3; j++)
    {
        printf("%d\n",*a);
        a++;
    }
    return 0;
}

/**
* a++ would be treated as a=a+1, as a is not pointer the address cannot be updated 
* we will get lavlue required in function error
*/
