#include<stdio.h>
int xstrlen(char *str);
void xstrcpy(char *t, char *s);

int main()
{
    char arr[]="Bamboozled";
    char arr2[25];
    int len1,len2;

    len1= xstrlen(arr);
    len2= xstrlen("HumptyDumpty");
    xstrcpy(arr2,arr);    
    printf("string is %s, len is %d\n", arr, len1);
    printf("string is %s, len is %d\n","HumptyDumpty", len2);
    printf("string after copying is %s\n", arr2); 
    return 0;
}

void xstrcpy(char *target, char *source)
{
    while(*source != '\0')
    {
        *target = *source;
        target++;
        source++;
    }
}

int xstrlen(char *str)
{
    int len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return len;
} 
