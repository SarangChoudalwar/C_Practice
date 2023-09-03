/* Deque is the que where the element can be added or deleted at front or at rear both*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *link;
};

void addqatend(struct node **front, struct node **rear, int val)
{
    if(*front == NULL)
    {
        /*its a first node to be created */
        struct node *new;
        new= (struct node *) malloc (sizeof(struct node));
        new->val = val;
        new->link = NULL;
        *front = new;
        *rear = new;
    }
    else
    {
        /*linked list is having already nodes created */
        struct node *temp;
        temp = *rear;
        struct node *new;
        new = (struct node *) malloc (sizeof(struct node));
        new->val = val;
        new->link = NULL;
        temp->link = new;
        *rear = new;
    }
}

void addqatbeg(struct node **front, struct node **rear, int val)
{
    if(*front == NULL)
    {
        /* First node to be created */
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        new->val = val;
        new->link = NULL;
        *front = new;
        *rear = new;
    }
    else
    {
       /* Already node exist on the linked list */
        struct node *temp;
        temp = *front;
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        new->val = val;
        new->link = temp;
        *front = new;
    }
}

int delqatbeg(struct node **front, struct node **rear)
{
    int retval = 0;
    if(*front != NULL)
    {
        if(*front == *rear)
        {
            struct node *temp;
            temp = *front;
            /* linked list is having only 1 node which needs to be deleted */
            retval = temp->val;
            free(temp);
            *front = NULL;
            *rear = NULL;
        }
        else
        {
            /* linked list is having more than 1 element and front element needs to be deleted */
            struct node *temp;
            temp = *front;
            retval = temp->val;
            temp = temp->link;
            free(*front);
            *front = temp;
        }
    }
    else
    {   
        /*linked list is already empty nothing to delete.*/
        printf("linked list already empty nothing to delete\n");
    }

    return retval;
}

int delqatend(struct node **front, struct node **rear)
{
    int retval=0;
    if(*rear != NULL)
    {
        if(*rear == *front)
        {
            /*linked list is having only 1 node which needs to be deleted. */
            struct node *temp;
            temp = *rear;
            retval = temp->val;
            free(temp);
            *rear = NULL;
            *front = NULL;
        }
        else
        {
            /*linked list is having more than 1 element and the last element needs to be deleted */
            struct node *temp;
            temp = *front;
            
            while(temp->link != *rear)
            {
                temp = temp->link;
            
            }

            retval = temp->link->val;
            temp->link = NULL;
            free(*rear);
            *rear = temp;
        }
    }
    else
    {
        /*linked list is already empty nothing to delete. */
        printf("linked list already empty nothing to delete\n");
    }
    return retval;
}
void display(struct node **front)
{
    struct node *temp;
    temp = *front;
    while(temp != NULL)
    {
        printf("%d\n",temp->val);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    struct node *front, *rear;
    rear = NULL;
    front = NULL;
    int val=0;
    addqatend(&front, &rear, 10); 
    addqatbeg(&front, &rear, 11); 
    addqatend(&front, &rear, 13); 
    addqatbeg(&front, &rear, 14); 
    addqatend(&front, &rear, 15); 
    addqatbeg(&front, &rear, 16); 
    addqatend(&front, &rear, 17); 
    addqatbeg(&front, &rear, 18); 
    display(&front);

    val = delqatbeg(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    
    val = delqatend(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);

    val = delqatbeg(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    
    val = delqatend(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);

    val = delqatbeg(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    
    val = delqatend(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);

    val = delqatbeg(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    
    val = delqatend(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    
    val = delqatbeg(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    
    val = delqatend(&front, &rear);
    printf("value popped is %d\n",val);
    display(&front);
    return 0;
}
