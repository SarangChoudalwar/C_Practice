#include<stdio.h>
int main()
{
    char str[] = "Samuel";
    char *a = "Samuel";
}

/*whats the difference between this 2 one may ask, the difference is str is array of character where \0 is appeneded at the last, whereas
    a is just a pointer to constant string. one can modify inidividual members of thr array str by accessing str[n], this is not poissible when
    using pointer. The str cannot point to any other base address other than constant string Samuel but the pointer a can point to any other base
    address if required.*/
