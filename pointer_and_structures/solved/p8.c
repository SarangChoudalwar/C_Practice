#include<stdio.h>
int main()
{
    struct s1
    {
        char *z;
        int i;
        struct s1 *p;
    };
    static struct s1 a[]= {
                            {"Nagpur", 1, a+1},
                            {"Raipur", 2, a+2},
                            {"Kanpur", 3, a}
                            };
    struct s1 *ptr = a;
    printf("%s\n",++(ptr->z));
    printf("%s\n", a[(++ptr)->i].z);
    printf("%s\n", a[--(ptr->p->i)].z);
    return 0;
}
