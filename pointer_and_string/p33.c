#include<stdio.h>
int main()
{
    char name[] = "Klinsman";
    int i;
    
    i=0;
    while(name[i])
    {
        printf("%c %c %c %c \n", name[i], *(name + i), *(i + name), i[name]);
        i++;
    }
    printf("\n");
    return 0;
}
