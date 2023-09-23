#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *p, *q;
    
    p = malloc(sizeof(struct node));
    q = malloc(sizeof(struct node));
    p->data = 21;
    q->data = 31;
    p->next = q;
    q->next = p;

    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
    /* Expectation is of circular link list */
    return 0;
}
