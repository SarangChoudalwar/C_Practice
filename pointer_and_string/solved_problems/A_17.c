#include<stdio.h>
#include<string.h>

int main()
{
    char a[]="Able was i ere i saw elbA";
    char *t;
    char *s;
    char *b;
    
    s = a;
    b = a + strlen(a) -1;
    t = b;
    while(s != t)
    {
        printf("%c", *s);
        s++;
        printf("%c", *t);
        t--;
    }
    printf("\n");
    return 0;
}
