/* Que operation demonstrated with the linkedlist */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *link;
};

void addq(struct node **front, struct node **rear, int val)
{
    if(*front == NULL)
    {
        /* The entire que is empty */
        struct node *new;
        new = (struct node *) malloc(sizeof(struct node));
        new->val = val;
        new->link = NULL;
        *front = new;
        *rear = new;
    }
    else
    {
        /* the que is having atleast 1 element in the node */
        struct node *new;
        new = (struct node *) malloc(sizeof(struct node));
        new->val = val;
        new->link = *front;
        *front = new;
    }
}

void dispq(struct node **front)
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

int delq(struct node **front, struct node **rear)
{
    int retVal = 0;
    if(*front != NULL)
    {
        /*Que is not empty*/
        struct node *tempRear;
        struct node *tempFront;
        tempRear = *rear;
        tempFront = *front;
        
        if(tempFront == tempRear)
        {
            /* only single node present and that should be deleted from the que */
            retVal = tempRear->val;
            free(tempRear);
            *front = NULL;
            *rear = NULL;
        }
        else
        {
            /* More than 1 node present in the que to be deleted */
            while(tempFront->link != tempRear)
            {
                tempFront = tempFront->link; 
            }

            retVal = tempRear->val;
            *rear = tempFront;
            tempFront->link = NULL;
            free(tempRear);
        }
        
    }
    else
    {
        printf("Que is empty\n");
    }

    return retVal;
}


int main()
{
    struct node *front;
    struct node *rear;
    int item;
    front = rear = NULL;
    
    addq(&front,&rear, 1);
    addq(&front,&rear, 2);
    addq(&front,&rear, 3);
    addq(&front,&rear, 4);
    addq(&front,&rear, 5);
    
    dispq(&front);
    
    item = delq(&front,&rear);
    printf("%d popped\n",item);
    dispq(&front);

    item = delq(&front,&rear);
    printf("%d popped\n",item);
    dispq(&front);
    
    item = delq(&front,&rear);
    printf("%d popped\n",item);
    dispq(&front);

    item = delq(&front,&rear);
    printf("%d popped\n",item);
    dispq(&front);
    
    item = delq(&front,&rear);
    printf("%d popped\n",item);
    dispq(&front);

    item = delq(&front,&rear);
    printf("%d popped\n",item);
    dispq(&front);

    return 0;
}
