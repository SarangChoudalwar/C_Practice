/*Write a function xstrstr() that will scan a string for the occurance of a given substring.
  The prototype of the function would be
  char *xstrstr(char *string1, char *string2)
  the function should return a pointer to the element in the string 1
  where string2 begins. If string2 does not ocur in string1 then 
  xstrstr should return NULL.
  For example, if string1 is "somewhere over the rainbow"; and
  string2 is "over" then xstrstr() should return address of 'o'
  in string 1 */
#include<stdio.h>
char *xstrstr(char *string1, char *string2);

int main()
{
    char *string1 = "somewhere over the rainbow";
    char *string2 = "bow";
    char *retPtr = NULL;
    
    retPtr = xstrstr(string1,string2);
    if(retPtr == NULL)
    {
        printf("String 2 not found in string 1 \n");
    }
    else
    {
        printf("String 2 found at location %ld with value of %c\n", retPtr, *retPtr);
    }
    return 0;
}

char *xstrstr(char *string1, char *string2)
{
    char *result = NULL;
    char *tempstring = string2;
    int flag = 0;
    if(string1 == NULL || string2 == NULL)
    {
        printf("Invalid input");
        return NULL;
    }

    while(*string1 && (*tempstring !='\0'))
    {
        if(*string1 == *tempstring)
        {
             if(flag == 0)
             {
                result = string1;
                flag = 1;
             }
             tempstring++;
        }
        else
        {
            tempstring = string2; 
            flag =0;
            result = NULL;
        }
        string1++;
    }

    return result;
}

