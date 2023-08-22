#include<stdio.h>
int main()
{
    char str[] = "MalayalaM";
    char *s;
    s = str +8;
    while(s >= str)
    {
        printf("%c",*s);
        s--;
    }
    printf("\n");
    return 0;
}

/*The program prints the reverse of the string but the string is palidrone hence it will print the same string */
