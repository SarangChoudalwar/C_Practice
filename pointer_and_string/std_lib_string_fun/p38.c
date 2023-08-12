#include<stdio.h>
int xstrlen(char *str);
int main()
{
    char arr[]="Bamboozled";
    int len1,len2;

    len1= xstrlen(arr);
    len2= xstrlen("HumptyDumpty");
    printf("string is %s, len is %d\n", arr, len1);
    printf("string is %s, len is %d\n","HumptyDumpty", len2);
    
    return 0;
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
