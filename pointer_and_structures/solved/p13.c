#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        struct node *prev;
        int data;
        struct node *next;
    };

    struct node *p, *q;

    p = malloc(sizeof(struct node));
    q = malloc(sizeof(struct node));
    p->prev = NULL;
    p->data = 75;
    p->next = q;
    q->prev = p;
    q->data = 90;
    q->next = NULL;

    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p= p->next;
    }

    while(q!=NULL)
    {
        printf("%d\n",q->data);
        q = q->prev;
    }

    return 0;
}
