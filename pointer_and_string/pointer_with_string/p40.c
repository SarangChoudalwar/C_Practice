#include<stdio.h>
int main()
{
    char str1[] = "Hello";
    char *pstr = "Wassup";
    str1 = "Bye"; /* NOT ALLOWED */
    pstr = "Bye"; /* ALLOWED */
    return 0;
}
