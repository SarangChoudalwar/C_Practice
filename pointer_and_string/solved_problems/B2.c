#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "United";
    char *str2 = "Front";
    char *str3;
    str3 = strcat (str1,str2);
    printf("%s\n",str3);
    return 0;
}

/*There is no gurantee what is placed in memory after string United so adding to that will result in undef behaviour */
