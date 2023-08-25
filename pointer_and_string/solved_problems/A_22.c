#include<stdio.h>
int main()
{
    char names[3][20];
    int i;
    for(i=0;i<=2;i++)
    {
        printf("Enter Name :");
        scanf("%s", names[i]);
        printf("Entered Name is %s\n", names[i]);
    }
    return 0;
}
