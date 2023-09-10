#include<stdio.h>
struct book
{
    char name[25];
    char author[25];
    int callno;
};

void display(struct book *ptr);

int main()
{
    struct book b1 = {"Let us C", "YPK", 101};
    display(&b1);
    return 0;
}

void display(struct book *ptr)
{
    printf("Name %s\n author %s\n callno %d\n",ptr->name, ptr->author, ptr->callno);
}
