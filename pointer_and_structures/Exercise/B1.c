/* Find the output of the program */
#include<stdio.h>
int main()
{
    struct a
    {
        char *str;
        struct a *ptr;
    };
    static struct a arr[] = {
                                {"Niranjan", arr+2},
                                {"Praveen", arr},
                                {"Ashish", arr+1}
                            };
    struct a *p[3];
    int i;

    for(i=0;i<=2;i++)
    {
        p[i]=arr[i].ptr;
    }

    /*At this point 
        p[0] should be address of arr+2
        p[1] should be address of arr
        p[2] should be address of arr+1
    */
    
    printf("%s\n",p[0]->str);
    /*This should print string present at arr+2 i.e. Ashish */
    printf("%s\n",(*p)->str);
    /*(*p) can be represented as p[0] as well so result should be Ashish */
    printf("%s\n",(**p));
    /*(**p) can be represented as p[0][0] as well so result should be Ashish */
    return 0;
}
