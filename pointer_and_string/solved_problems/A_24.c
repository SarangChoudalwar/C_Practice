#include<stdio.h>
int main()
{
    char mess[6][30] = {
                        "Don't Walk in front of me ...",
                        "I may not follow,",
                        "Don't walk Behind me ...",
                        "I may not lead ; ",
                        "Just walk beside me ...",
                        "And be my friend." 
                        };
    printf("%c %c\n", *(mess[2]+9), *(*(mess+2)+9));
    return 0;
}
