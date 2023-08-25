/*Suppose 7 names are stored in an array of pointers names[] as shown below :
char *name[] = {
                "Santosh",
                "Amol",
                "Santosh Jain",
                "Kishore",
                "Rahul",
                "Amolkumar",
                "Hemant"
                };

Write a program to arrange this names in the alphabetic order

*/
#include<stdio.h>
#include<string.h>

int main()
{
    char *name[] = {
                    "Santosh",
                    "Amol",
                    "Santosh Jain",
                    "Kishore",
                    "Rahul",
                    "Amolkumar",
                    "Hemant",
                    "Sarang"
                    };

    for(int i=0; i<(sizeof(name)/sizeof(name[0])); i++)
    {
        for(int j=i+1;j<(sizeof(name)/sizeof(name[0])); j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                char *temp;
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    for(int k=0 ; k<(sizeof(name)/sizeof(name[0])); k++)
    {
        printf("%s\n",name[k]);
    }
    return 0;
}
