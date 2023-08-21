#include<stdio.h>
int main()
{
    char str[] ="Hello";
    char str2[]="Hello";
    if(str==str2)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
    return 0;
}

/*Unequal would get printed because the base address of both the strings are different */
