#include<stdio.h>
int main()
{
    char ch[20];
    int i=0;
    for(i=0;i<19;i++)
    {
        *(ch + i) = 67;
    }
    *(ch + i) = '\0';
    printf("%s\n",ch);
}
/* The problem demonstrates the use of integer as ASCI string 67 being ASCI for letter C, C will be printed 19 times */
