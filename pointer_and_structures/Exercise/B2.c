#include<stdlib.h>
#include<stdio.h>
int main()
{
    struct a
    {
        struct a *next;
        int data;
    };

    struct a *ptr[3];
    int i;

    ptr[0] = malloc(sizeof(struct a));
    ptr[1] = malloc(sizeof(struct a));
    ptr[2] = malloc(sizeof(struct a));

    ptr[0]->data = 10;
    ptr[1]->data = 20;
    ptr[2]->data = 30;
    
    ptr[0]->next = ptr[1];
    ptr[1]->next = ptr[2];
    ptr[2]->next = NULL;

    while(ptr[0] != NULL)
    {
        printf("%d\n",ptr[0]->data);
        ptr[0] = ptr[0]->next;
    }

    /*The print should print all the data values 10 20 30 */
    return 0;
}
