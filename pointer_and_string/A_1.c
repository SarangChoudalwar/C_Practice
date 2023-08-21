/*Find the output of the program */
#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "Rendezvous !";
    printf("%d\n", *(s+strlen(s)));
}
/* The ouput print the last character of the string which is "/0" the ASCI for the same is 0 hence it will print 0 */
