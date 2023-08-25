#include<stdio.h>
#include<string.h>

int main()
{
    char *str[]= {"Frogs", "Do", "Not", "Die", "They", "Croak"};
    int i;
    for(i=0;i<=5;i++)
    {
        printf("%s %d\n", str[i], strlen(str[i]));
    }
    printf("\n");
    return 0;
}
