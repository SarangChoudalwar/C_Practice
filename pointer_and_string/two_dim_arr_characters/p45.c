#include<stdio.h>
int main()
{
    char *names[] = {
                     "Akshay",
                     "Parag",
                    "raman",
                    "srinivas",
                    "gopal",
                    "rajesh"
                    };
    char *temp;
    printf("Original %s %s\n", names[0],names[1]);
    temp = names[0];
    names[0] = names[1];
    names[1] = temp;
    printf("After exchange %s %s\n", names[0], names[1]);
    return 0;
}
