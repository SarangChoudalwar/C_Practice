#include<stdio.h>
int main()
{
    char str[7]= "Strings";
    printf("%s\n",str);
    return 0;
}

/*The string size is actually 8 "\0" gets added at the end assigning all the 7 byte makes the code unpredictable */
