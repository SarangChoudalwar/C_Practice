#include<stdio.h>
int xstrlen(char *str);
void xstrcpy(char *t, char *s);
void xstrcat(char *t, char *s);
int main()
{
    char arr[]="Bamboozled";
    char arr2[25];
    char arr3[25] = "BAMBOOZLED";
    int len1,len2;

    len1= xstrlen(arr);
    len2= xstrlen("HumptyDumpty");
    xstrcpy(arr2,arr);    
    xstrcat(arr3,"HUMPTYDUMPTY");
    printf("string is %s, len is %d\n", arr, len1);
    printf("string is %s, len is %d\n","HumptyDumpty", len2);
    printf("string after copying is %s\n", arr2); 
    printf("string after concatination is %s\n", arr3); 

    return 0;
}

void xstrcat(char *target, char *source)
{
    int t_len = xstrlen(target);
    target = target + t_len;
    xstrcpy(target, source); 
}

void xstrcpy(char *target, char *source)
{
    while(*source != '\0')
    {
        *target = *source;
        target++;
        source++;
    }
    *target = '\0';
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
