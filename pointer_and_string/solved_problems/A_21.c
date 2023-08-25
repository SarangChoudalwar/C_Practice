#include<stdio.h>
int main()
{
    char *mess[] ={
                    "Some Love One",
                    "Some Love Two",
                    "I love One",
                    "That is you"
                    };
    printf("%d %d\n", sizeof(mess), sizeof(mess[1]));
    return 0;
}

/*mess is storing the start address of the 4 string i.e. its storing the start pointer and not the entire string hence sizeof(mess) should return 4* address size and sizeof(mess[1]) should return size of individual address */
