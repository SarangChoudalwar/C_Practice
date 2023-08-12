#include<stdio.h>
int main()
{
    char str1[] ="Hello";
    char str2[10];

    char *s = "Wassup";
    char *q;
    str2 = str1; /* NOT ALLOWED */
    q = s ; /* Allowed */
    return 0;
}
