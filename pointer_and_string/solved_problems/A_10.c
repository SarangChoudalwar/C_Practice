#include<stdio.h>
int main()
{
    char s[]="C smart!";
    int i;
    for(i=0;s[i];i++)
    {
        printf("%c %c %c %c \n", s[i], i[s], *(s+i), *(i+s));
    }
    return 0;
}
/*Demonstration of for loop with condition s[i] and various ways of accessing array elements */
