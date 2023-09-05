/* Illustration of doubly linked list. A linked list which stores not only next node address but also previous node address. */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int val;
    struct node *next;
};

void addatbeg(struct node **q, int val)
{
    if(*q == NULL)
    {
        /* Creation of nodes for completely empty linked list */
        struct node *temp;
        temp = *q;
        struct node *new;
        new = (struct node *) malloc (sizeof(struct node));
        new->prev = NULL;
        new->val = val;
        new->next = NULL;
        *q = new;
    }
    else{
        /* atlest 1 Node already exist */
        struct node *temp;
        temp = *q;
        struct node *new;
        new = (struct node *) malloc (sizeof(struct node));
        new->prev = NULL;
        new->val = val;
        new->next = temp;
        temp->prev = new;
        *q = new; 
    }
}

void append(struct node **q, int val)
{
    struct node *temp;
    temp = *q;
    if(temp !=NULL)
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        /* temp is pointing to the last node */
        struct node *new;
        new = (struct node *) malloc (sizeof(struct node));
        new->prev = temp;
        new->val = val;
        new->next = NULL; 
        temp->next = new;
    }
    else
    {
        /*Its a first node that should be created */
        struct node *new;
        new = (struct node *) malloc (sizeof(struct node));
        new->prev = NULL;
        new->val = val;
        new->next = NULL;
        *q = new;
    }
}

void display(struct node **q)
{
    struct node *temp;
    temp = *q;
    printf("data in forward direction - \n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp = temp->next;
    }
    printf("\n");
    printf("data in reverse direction - \n");
    
    temp = *q;    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    /* Here the temp is pointing to the last node */ 
    while(temp != NULL)
    {   
        printf("%d\n",temp->val);
        temp = temp->prev;
    }
    printf("\n");
}

void count(struct node **q)
{
    struct node *temp;
    temp = *q;
    int fwdCount =0;
    while(temp!=NULL)
    {   
        fwdCount++;   
        temp= temp->next;
    }
    printf("forward count is %d\n", fwdCount);
    temp = *q;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    int revCount=0;
    while(temp!=NULL)
    {
        revCount++;
        temp = temp->prev;
    }
    printf("reverse count is %d\n",revCount);
}

void addafter(struct node **q, int addAfter, int val)
{
    struct node *temp=NULL;
    struct node *old=NULL;
    temp = *q;
    old = temp;
    int nodeFound =0;
    while(temp != NULL)
    {
        if(temp->val == addAfter)
        {
            nodeFound =1;
            break;
        }
        old = temp;
        temp = temp->next;
    }

    if(nodeFound)
    {
        /* Situation where old is pointing to last node and temp is pointing to NULL */
        if(temp == NULL)
        {
            /* Node to be added at the last */
            struct node *new;
            new = (struct node *) malloc (sizeof(struct node));
            new->prev = old;
            new->val = val;
            new->next = NULL;
            old->next = new;
        }
        else if(old == temp)
        {
            /* Where the node to be inserted is after first node */
            struct node *new;
            new = (struct node *) malloc (sizeof(struct node));
            new->prev = NULL;
            new->val = val;
            new->next = temp;
            temp->prev = new;
            *q = new;
        }
        else 
        {
            /* else the node to be added is the inbetween node */ 
            struct node *new;
            new = (struct node *) malloc (sizeof(struct node));
            new->prev = old;
            new->val = val;
            new->next = temp;
            old->next = new;
            temp->prev = new; 
        }
    }
    else
    {
        printf("desired value not found \n");
    }
}

int main()
{
    struct node *q;
    q = NULL;
    addatbeg(&q,10);    
    addatbeg(&q,11);    
    addatbeg(&q,12);    
    display(&q);

    append(&q,13);
    append(&q,14);
    append(&q,15);
    display(&q);
    count(&q);

    addafter(&q,11,111);
    addafter(&q,111,1111);
    addafter(&q,99,10);
    addafter(&q,12,12);
    addafter(&q,15,15);
    display(&q);

   return 0;
}
