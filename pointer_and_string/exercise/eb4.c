#include<stdio.h>
int main()
{
    char s[]="C a of ";
    char t[] = "is philosophy life";
    char u[40];
    char *ss=s,*tt=t,*uu=u;

    while(*ss || *tt)
    {
        while(*ss)
        {
            if((*uu++ = *ss++)==' ')
                break;
        }
        while(*tt)
        {
            if((*uu++ = *tt++)== ' ')
                break;
        }
    }
    *uu = '\0';
    puts(u);
    return 0;
}
