#include<stdio.h>

struct b
{
    char name[10];
    char address[50];
};

void print( struct b *bb);

int main()
{
    struct b bb = {
                        "Niranjan",
                        "Samarth Apartment, TT nagar, Nagpur"
                    };
    print(&bb);
}

void print( struct b *bb)
{
    printf("%s\n", bb->name);
    printf("%s\n", bb->address);
}
