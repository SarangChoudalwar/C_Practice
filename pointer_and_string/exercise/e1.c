/*Write a function xstrchr() which scans a string from begining to end in search of a character. Tf the character is found it should return a pointer 
to the first occurance of the given character in the string. If the given character is not found in the string, the function should return NULL.
The prototype of the function would be :
char * xstrchr(char *string, char ch) */

#include<stdio.h>

char *xstrchar(char *string, char ch);

int main()
{
    char *str="Hello World";
    char *retptr=NULL;

    retptr = xstrchar(str, 'W');
    if(retptr != NULL)
    {
        printf("%c found\n", *retptr);
    }
    else
    {
        printf("not found\n");
    }
    return 0;
}

char *xstrchar(char *string, char ch)
{
    if(string == NULL)
    {
        printf("Invalid INPUT ");
        return NULL;
    }
    
    while(*string)
    {
        if(*string == ch)
        {
            return string;
        }
        string++;
    }
    
    printf("required character not found\n");
    return NULL;
}

