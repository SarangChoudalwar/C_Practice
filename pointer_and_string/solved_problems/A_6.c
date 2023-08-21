#include<stdio.h>
int main()
{
    char str[10] = {0,0,0,0,0,0,0,0,0,0};
    char *s;
    int i;
    s =str;
    for(i=0;i<=9;i++)
    {
        if(*s)
        {
            printf("%c",*s);
        }
        s++;
    }
    return 0;
}

/*Here even though the array is populated with 0's the if condition will not pass as it will compare it against 0 and it will fail hence no print will happen */
