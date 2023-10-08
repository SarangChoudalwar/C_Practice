#include<stdio.h>
int main()
{
    struct a
    {
        struct b
        {
            char name[10];
            int age;
        }bb;
        struct c
        {
            char address[50];
            int sal;
        }cc;
    };

    struct a *ptr;
    
    struct a aa = {
                        {"George",30},
                        {"86, Vermalayout, Nagpur", 4000}
                    };
    ptr = &aa;
    printf("%s %s %d %d\n", ptr->bb.name, ptr->cc.address, ptr->bb.age, ptr->cc.sal);

    return 0;
}
