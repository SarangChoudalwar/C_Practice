/* Demonstration of stack push and pop operation using linked-list */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *link;
};

void push(struct node **q, int val)
{
    struct node *new;
    new= (struct node *) malloc(sizeof(struct node));
    new->val = val;
    new->link = *q;
    *q = new;
}

void stackdisplay(struct node **q)
{
    struct node *temp;
    temp = *q;
    while(temp != NULL)
    {
        printf("%d\n",temp->val);
        temp = temp->link;
    }
    printf("\n");
}

int pop(struct node **q)
{
    struct node *temp;
    int retval=0;

    temp = *q;

    if(temp!=NULL)
    {
        retval = temp->val;
        *q = temp->link;
        free(temp);
    } 

    return retval;
}

int main()
{
    struct node *top;
    top = NULL;
    int popped;

    push(&top, 2);
    push(&top, 3);
    push(&top, 4);
    push(&top, 5);
    
    stackdisplay(&top);
    
    popped = pop(&top);
    printf("%d popped \n", popped);
    popped = pop(&top);
    printf("%d popped \n", popped);
    popped = pop(&top);
    printf("%d popped \n", popped);

    stackdisplay(&top);

    return 0;
}
