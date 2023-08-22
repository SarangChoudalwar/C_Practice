#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "For your eyes only";
    int i;
    char *p;
    for(p=str,i=0; p+i <=str + strlen(str); p++,i++)
    {
        printf("%c",*(p+i));
    }
    printf("\n");
    return 0;
}

/* Both p and i are getting incremented by 1 hence alternate letter will get omited */
