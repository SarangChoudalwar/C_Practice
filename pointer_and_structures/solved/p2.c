/* Demonstation of the structure address and values using poitners */
#include<stdio.h>
int main()
{
    struct
    {
        int num;
        float f;
        char msg[50];
    }m;

    m.num = 1;
    m.f = 3.14;
    strcpy(m.msg, "Everything looks rosy");
    printf("%u %u %u\n", &m.num, &m.f, &m.msg);
    printf("%d %f %s\n", m.num, m.f, m.msg);
    return 0;
}

/* Expected output is printing the address of the elements of the elements of the structure then values of the structure element */
