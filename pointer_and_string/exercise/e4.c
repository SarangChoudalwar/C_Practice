/*Write a program to compress any given string such that the 
  multiple blanks present in it are elemeneted. Store the 
  compressed meesage in another string. Also write a decompressement
  program to get back the original string with its spaces restored 
  The uncompressed string can be:
  "Imperial Palace.Rome  Attention  Julius Caesar.Dear Caesar,
   we have the  clarification you  requested.Details to  follow  by
   courier.Meanwhile  stay clear of Brutus."
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *msg="Imperial Palace.Rome  Attention  Julius Caesar.Dear Caesar,we have the  clarification you  requested.Details to  follow  by courier.Meanwhile  stay clear of Brutus.";
    int len;
    len = strlen(msg);
    char *compress = (char *)malloc(len);
    char *decompress = (char *)malloc(len);
    char *comptemp = compress;
    char *msgtemp = msg;
    char position[100];
    printf("%s\n",msg);
    for(int i=0; i<len; i++)
    {
        if(*msgtemp == ' ' && *(msgtemp +1) == ' ')
        {   
            static int k =0;
            position[k] = i;
            k++;
            *comptemp = *msgtemp;
            *comptemp++;
            *msgtemp++;
            *msgtemp++;
        }
        else
        {
            *comptemp = *msgtemp;
            *comptemp++;
            *msgtemp++;
        }
    }
    printf("%s\n",compress);
    
    return 0;
}
