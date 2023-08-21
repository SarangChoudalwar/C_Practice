#include<stdio.h>
#include<string.h>

int main()
{
    char *names[6];
    
    for(int i=0;i<6;i++)
    {
        printf("Enter name :");
        scanf("%s",names[i]);
    }
    return 0;
}
/**
*The program does compile but does not work as intended as the values in the names array are populated with the garbage values. It would not be correct to send garbage values to scanf functions.
*/
