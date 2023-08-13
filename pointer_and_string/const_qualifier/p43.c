#include<stdio.h>
const char *fun();
int main()
{
    const char *p;
    p = fun();
    *p = "H" ; /*Invalid as the pointer is pointing to const string. */
    p = "Hello "; /* Valid as the pointer is not constant hence the base address can point to String Hello */
    printf("%s", p);
    return 0;
}

const char *fun(void)
{
    return "Hello";
}
