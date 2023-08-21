#include<stdio.h>
int main()
{
    char str[] = {48,48,48,48,48,48,48,48,48,48,48};
    char *s;
    int i;
    s = str;
    for(i =0 ; i<10; i++)
    {
        if(*s)
            printf("%c",*s);
        s++;
    }
    printf("\n");
    return 0;
}
/*48 being ASCI for 0 0 will be printed 10 times */
