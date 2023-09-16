#include<stdio.h>
int main()
{
    struct a
    {
        char ch[7];
        char *str;
    };

    struct b
    {
        char *c;
        struct a ss1;
    };

    struct b s2 = {"Raipur", "Kanpur", "Jaipur"};
    printf("%s %s\n",s2.c, s2.ss1.str);
    printf("%s %s\n",++s2.c, ++s2.ss1.str);
    return 0;
}
