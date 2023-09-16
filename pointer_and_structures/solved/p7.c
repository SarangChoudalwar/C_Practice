#include<stdio.h>
int main()
{
    struct s1
    {
        char *str;
        int i;
        struct s1 *ptr;
    };
    static struct s1 a[]= {
                            {"Nagpur",1,a+1},
                            {"Raipur",2,a+2},
                            {"Kanpur",3,a}
                            };
    static struct s1 *p =a;
    int j=0;
    for(j=0;j<=2;j++)
    {
        printf("%d ",--a[j].i);
        printf("%s\n",++a[j].str);
    }
    return 0;
}
