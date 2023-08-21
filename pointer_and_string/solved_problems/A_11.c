#include<stdio.h>
int main()
{
    char s[] = "Oinks Grunts and Guffaws ";
    printf("%c\n", *(&s[2]));
    printf("%s\n", s+5);
    printf("%s\n", s);
    printf("%c\n", *(s+2));
    printf("%u\n", s);

    return 0;
}
/* "*(&s[2])" prints character present at 2, s+5 prints string starting 5 position from base address 
    s prints complete string s+2 prints character present at 2nd position from base address s along with 
    %u prints the value of base address */
