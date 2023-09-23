#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *link;
    };
    struct node *p,*q;
    
    p= malloc(sizeof(struct node));
    q= malloc(sizeof(struct node));

    printf("%d %d\n", sizeof(p), sizeof(q));

    /*Expectation is the printf will return the address size it requires to store the pointer hence it would be 8 for 64 bit machine */
    return 0;
}
