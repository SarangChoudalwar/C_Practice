#include<stdio.h>
int main()
{
    printf("%c\n","abcdefgh"[4]);
    return 0;
}
/*"abcdefgh"[4] can be re-written as *("abcdefgh" + 4) so it will print 4th charater from base */
