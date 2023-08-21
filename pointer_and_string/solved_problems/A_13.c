#include<stdio.h>
int main()
{
    char str[]= "Limericks";
    char *s;
    s= &str[6]-6;
    while(*s)
        printf("%c", *s++);
    printf("\n");
    return 0;
}
/*Here the s pointer is getting the base address of the string and printing the values until it encounters "\0" at the end */
