#include<stdio.h>
/* Use x's elements from address of y */

struct a
{
    struct b
    {
        int i;
        float f;
        char ch;
    }x;
    struct c
    {
        int j;
        float g;
        char ch;
    }y;
};

void fun(struct c *y_ptr);

int main()
{
    struct a z;
    fun(&z.y);
    printf("%d %f %c\n", z.x.i,z.x.f,z.x.ch); 
    return 0;
}

void fun(struct c *y_ptr)
{
    struct a abc;
    long int offset = ((void *)(&abc.y.j) - (void *)(&abc));
    printf("offset is %lu %lu %lu\n",((void *)(&abc) - (void *)(&abc.y.j)),(void *) &abc, (void *)&abc.y.j);
    char *address = (char *)(y_ptr) - (char *)offset;
    ((struct b *) address)->i = 100;
    ((struct b *) address)->f = 101.23;
    ((struct b *) address)->ch =  'a';
    printf("%d %f %c\n", ((struct b *) address)->i, ((struct b *)address)->f, ((struct b *)address)->ch);
}
