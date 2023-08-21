#include<stdio.h>
int main()
{
    char arr[] = "PickPocketing My peace of mind";
    int i;
    printf("%c\n",arr);
    arr++;
    printf("%c\n",arr);
    return 0;
}

/*Here the compiler only have one reference to constant string i.e the base address of the string if thats lost compiler cannot use the string again. essentially when we are doing arr++ it will try to alter the only reference compiler has and hence it would not be allowed in this situation compiler will complain lvalue required. */
