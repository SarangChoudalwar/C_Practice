/*demonstration of structure pointer with strings */
#include<stdio.h>
int main()
{
    struct a
    {
        char ch[7];
        char *str;
    };
    struct a s1= {"Nagpur", "Bombay"};
    printf("%c %c\n", s1.ch[0], *(s1.str));
    printf("%s %s\n", &s1.ch, s1.str);
}
