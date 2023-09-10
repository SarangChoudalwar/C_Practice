#include<stdio.h>
int main()
{
    struct account 
    {
        int no;
        float bal;
    };
    struct account a[10];
    
    for(int i=0;i<=9;i++)
    {
        printf("Enter acc no and balance :\n");
        scanf("%d %f", &a[i].no, &a[i].bal);
    }
    for(int i=0;i<=9;i++)
    {
        printf("Account no %d balance %f\n", a[i].no, a[i].bal);
    }
    return 0;
}
