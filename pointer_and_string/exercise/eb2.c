#include<stdio.h>
#include<string.h>
int main()
{
    static char str1[] = "Good";
    static char str2[20];
    static char str3[20] = "Day";
    int i;
    i = strcmp(strcat(str3,strcpy(str2,str1)),strcat(str3,"good"));
    printf("%d\n",i);
    return 0;
}
