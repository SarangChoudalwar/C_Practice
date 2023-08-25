#include<stdio.h>
int main()
{
    char s[]="Lumps, bumps, swollen veins, new pains";
    char t[40];
    char *ss, *tt;
    tt = t;
    ss = s;
    while(*tt++ = *ss++);
    printf("%s\n",t);
    return 0;

}
