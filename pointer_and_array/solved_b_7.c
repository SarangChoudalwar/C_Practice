#include<stdio.h>
int main()
{
    char a[]="SunStroke";
    char *p="Coldwave";
    a="coldwave";
    p="Sunstroke";
    printf("%s %s",a,p);

    return 0;
}

/*
* the program will fail as array a cannot be assigned with new string dynamically whereas pointer can be assigned on runtime
*/
