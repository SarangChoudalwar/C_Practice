/*Demonstration of the array of structure with address */
#include<stdio.h>
int main()
{
    struct 
    {
        int num;
        float f;
        char r;
    }v[2];

    printf("%u %u %u\n", &v[0].num, &v[0].f, &v[0].r);
    printf("%u %u %u\n", &v[1].num, &v[1].f, &v[1].r);
    return 0;
}
