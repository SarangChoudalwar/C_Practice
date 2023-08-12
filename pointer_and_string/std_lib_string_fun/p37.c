#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Bamboozled";
    char str2[] = "Chap";
    char str3[20];
    
    int len,k;
    
    len = strlen(str1);
    printf("length of str1 is %d\n", len);

    strcpy(str3,str1);
    printf("After copying str3 = %s\n", str3);

    k = strcmp(str1,str2);
    printf("On comparing str1 and str2 =%d\n", k);

    k = strcmp(str1,str3);
    printf("On comparing str1 and str3 =%d\n", k);

    strcat(str1,str2);
    printf("On concating str1 and str2 =%s\n", str1);

    return 0;
}
