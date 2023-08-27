#include<stdio.h>
#include<stdlib.h>

struct node
{
    int marks;
    struct node *next;
};

int count(struct node *ptr)
{
    int ret=0;
    while(ptr !=NULL)
    {
        ptr=ptr->next;
        ret++;
    }

    return ret;
}


void append(struct node **ptr, int val)
{
    struct node *temp, *temp2;

    if(*ptr==NULL)
    {
        temp = (struct node *)malloc (sizeof( struct node));
        temp->marks = val;
        temp->next = NULL;
        *ptr = temp;
    }
    else
    {
        temp2 = *ptr;
        while(temp2->next != NULL)
        {
            temp2=temp2->next;
        }
        
        temp = (struct node *)malloc (sizeof(struct node));
        temp->marks = val;
        temp->next = NULL;
        temp2->next = temp;
    }
}

void display(struct node **ptr)
{
    struct node *temp;
    temp = *ptr;
    while(temp != NULL)
    {
        printf("data is %d\n",temp->marks);
        temp=temp->next;
    }
}

void addatbeg(struct node **ptr, int val)
{
    struct node *temp,*new;
    temp = *ptr;
    new = (struct node *)malloc(sizeof(struct node));
    new->marks = val;
    new->next = temp;
    *ptr = new;
}

int main()
{
    struct node *ptr;
    ptr=NULL;
    printf("Number of nodes is %d\n", count(ptr));
    append(&ptr,1);
    append(&ptr,2);
    append(&ptr,3);
    append(&ptr,4);
    append(&ptr,5);
    append(&ptr,6);
    append(&ptr,7);
    display(&ptr);
    addatbeg(&ptr,999);
    addatbeg(&ptr,888);
    addatbeg(&ptr,777);
    display(&ptr);
    printf("Number of nodes is %d\n", count(ptr));
    return 0;
}
