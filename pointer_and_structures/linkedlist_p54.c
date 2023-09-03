/*
Demonstration of ascending order linked list
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *link;
};

void add(struct node **q, int val)
{
    struct node *temp;
    struct node *old;
    int flag;
    temp = *q;
    if(temp == NULL)
    {
        /* its a first node in the linked list */
        struct node *new;
        new = (struct node *) malloc(sizeof(struct node));
        new->val = val;
        new->link = NULL;
        *q = new;
    }
    else
    {
        while(temp != NULL && (temp->val < val))
        {
            old = temp;
            temp = temp->link;
        }
        /* linked list end or the desired location has been reached. */
        if(temp  == *q)
        {
            /* First element to be inserted */
            struct node *new;
            new = (struct node *)malloc(sizeof(struct node));
            new->val = val;
            new->link = temp;
            *q = new; 
        }
        else
        {
            /* other than first node needs to be inserted */
            struct node *new;
            new = (struct node *)malloc(sizeof(struct node));
            new->val = val;
            new->link = temp;
            old->link = new;
        }
    }
}

void display(struct node **q)
{
    struct node *temp;
    temp = *q;
    while(temp != NULL)
    {
        printf("Value of node is %d\n", temp->val);
        temp = temp->link;
    } 
}

int count(struct node **q)
{
    struct node *temp;
    temp = *q;
    int val = 0;
    
    while(temp != NULL)
    {
        temp = temp->link;
        val++;
    }

    return val;
}

void delete(struct node **q, int val)
{
    struct node *temp;
    struct node *old;
    temp = *q;
    while(temp!=NULL)
    {
        if(temp->val == val)
        {
            if(temp == *q)
            {
                /* first node to be deleted */
                free(*q);
                *q = temp->link;
            }
            else
            {
                /* Not first node to be deleted */
                old->link=temp->link;
                free(temp);
            }
        }
        else
        {
            old = temp;
            temp = temp->link;
        }
    }
}
int main()
{
    struct node *p;
    p = NULL;

    add(&p,5);
    display(&p);
    printf("\n");
    add(&p,1);    
    display(&p);
    printf("\n");
    add(&p,6);    
    display(&p);
    printf("\n");
    add(&p,4);    
    display(&p);
    printf("\n");
    add(&p,7);
    display(&p);
    printf("\n");
 
    delete(&p, 7);    
    delete(&p, 4);    
    delete(&p, 5);    
    delete(&p, 9);    
    display(&p);


    return 0;
}
