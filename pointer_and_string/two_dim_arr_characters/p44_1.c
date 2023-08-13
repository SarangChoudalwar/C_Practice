#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOT_FOUND 0

int main()
{
    char* guest[6] = {
                            "RAM",
                            "Shyam",
                            "Tushu",
                            "Sarang",
                            "Sayli",
                            "Atul"
                        };
    char guest_name[10];
    int flag = 0;
    printf("Enter your name :");
    scanf("%s",guest_name);

    for(int i=0; i<6; i++)
    {
        if(strcmp(guest[i], guest_name) == 0)
        {
            printf("Welcome to the party \n");
            flag = 1;
            break;
        }
    }    
    
    if (flag == 0)
    {
        printf("you are not invited \n");
    }
    
    return 0;
}
