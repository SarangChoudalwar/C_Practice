#include<stdio.h>
int main()
{
    char a[2][2][25] = {
                            {
                                "Jack and Jill",
                                "Went up the hill"
                            },
                            {
                                "Jack fell down",
                                "And broke his crown"
                            }
                        };
    printf("%s %s %s %s\n", &a[0][0][9], &a[0][1][12], &a[1][0][10], &a[1][1][14]);
    return 0;
}
