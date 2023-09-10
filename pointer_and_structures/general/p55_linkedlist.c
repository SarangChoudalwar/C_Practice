/* linked list reversal */
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int val;
    struct node *link;
};

void addatbeg(struct node **q, int val)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->val = val;
    new->link = *q;
    *q = new;
}

void display(struct node **q)
{
    struct node *temp;
    temp = *q;

    while(temp !=NULL)
    {
        printf("Value of node is %d\n", temp->val);
        temp = temp->link;
    }
    printf("\n");
}

void reverse(struct node **q)
{
    struct node *orig;
    struct node *rev;
    
    orig = *q;
    
    while(orig != NULL)
    {
        struct node *new;
        new = (struct node *) malloc(sizeof(struct node));
        new->val = orig->val;
        
        if(orig == *q)
        {
            /*its a first node*/
            new->link = NULL;
            rev = new;
        }
        else
        {
            /*its not a first node*/
            new->link = rev;
            rev = new;
        }
        orig = orig->link;
    }

    *q = rev;
}

int main()
{
    struct node *p;
    p = NULL;
    addatbeg(&p, 1);
    addatbeg(&p, 2);
    addatbeg(&p, 3);
    addatbeg(&p, 4);
    display(&p);
    reverse(&p);
    display(&p);
    return 0;
}
