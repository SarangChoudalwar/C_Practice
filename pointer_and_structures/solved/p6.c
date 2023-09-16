#include<stdio.h>
int main()
{
    struct s1
    {
        char *z;
        int i;
        struct s1 *p;
    };
    static struct s1 a[] = {
                            {"Nagpur",1,a+1},
                            {"Raipur",2,a+2},
                            {"kanpur",3,a}
                            };
    struct s1 *ptr=a;
    printf("%s %s %s\n",a[0].z,ptr->z,a[2].p->z);
    return 0;
}
