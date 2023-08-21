#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<alloc.h>
int main()
{
    char *name[5];
    char str[20];
    
    for(int i=0; i<5; i++)
    {
        printf("Enter name:");
        scanf("%s",str); 
        name[i] = (char *) malloc(strlen(str));
        strcpy(name[i],str);
    }
    
    for(int i=0; i<5; i++)
    {
        printf("%s\n",name[i]);
    }
}
