/* Demonstation of wrong use of -> and . */
#include<stdio.h>
struct s
{
    char ch;
    int i;
    float a;
};

f(struct s v)
{
    printf("%c %d %f\n", v->ch, v->i, v->a);
}

g(struct s *v)
{
    printf("%c %d %f\n", v.ch, v.i, v.a);
}

int main()
{
    struct s var = {'C',100,12.55};
    f(var);
    g(&var);
    return 0;
}
