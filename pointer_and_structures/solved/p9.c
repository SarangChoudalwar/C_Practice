#include<stdio.h>
int main()
{
    struct s1
    {
        char *str;
        struct s1 *ptr;
    };
    static struct s1 arr[] = {
                                {"Nikhil", arr+1},
                                {"Aditya", arr+2},
                                {"Sudheer", arr},
                                };
    struct s1 *p[3];
    
    for(int j = 0; j<=2; j++)
    {
        p[j] = arr[j].ptr;
    }

    printf("%s\n",p[0]->str);
    printf("%s\n",(*p)->str);
    printf("%s\n",(**p));

    return 0;
}
