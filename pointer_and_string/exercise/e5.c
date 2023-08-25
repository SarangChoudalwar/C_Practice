/*Write a program to encode any given string such that it gets 
  converted into an unrecognizable form.Also write a decode 
  function to get back the original string. Try to make 
  encryption scheme as difficult to break as possible */
#include<stdio.h>
#include<stdlib.h>
char *encrypt(char *input , int len);
char *decrypt(char *input, int len);

int main()
{
    char arr[]="Happy Holi!";
    encrypt(arr,sizeof(arr));
    printf("Encrypted text is %s\n",arr);
    decrypt(arr,sizeof(arr));
    printf("Decrypted text is %s\n",arr);
    return 0;
}

char *encrypt(char *input, int len)
{
    if(input != NULL)
    {
        while(*input)
        {
            *input = *input + 3;
            input++;
        }
    }
    return input;
}

char *decrypt(char *input ,int len)
{
    if(input != NULL)
    {
        while(*input)
        {
            *input = *input - 3;
            input++;
        }
    }
    return input;
} 
