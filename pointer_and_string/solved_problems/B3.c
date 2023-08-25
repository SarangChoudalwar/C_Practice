#include<stdio.h>
//#include<string.h>
int main()
{
    char str1[]= "Keep India Beautiful... emigrate ";
    char str2[40];
    strcpy(str2,str1);
    printf("%s\n",str2);
    return 0;
}

strcpy(char *t, char *s)
{
    while(*t++ = *s++);
}
/*even thouugh the string.h is included the local function will get called. */
