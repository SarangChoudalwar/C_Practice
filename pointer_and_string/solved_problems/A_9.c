#include<stdio.h>
int main()
{
    char *str[]={"Frogs", "Do", "Not", "Die", "They", "Croach"};
    printf("%d %d\n", sizeof(str), sizeof(str[0]));
    return 0;
}
/*str is the array of char pointers sizeof operator for str will give size of all pointers its holding 
sizeof str[0] will give size of 0th element of the array which is character pointer */
