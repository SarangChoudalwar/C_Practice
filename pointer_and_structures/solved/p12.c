#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *link;
    };

    struct node *p, *q;

    p = malloc(sizeof(struct node));
    q = malloc(sizeof(struct node));
    p->data = 30;
    p->link = q;
    q->data = 40;
    q->link = NULL;
    printf("%d\n", p->data);
    p = p->link;
    printf("%d\n",p->data);
    return 0;
}
