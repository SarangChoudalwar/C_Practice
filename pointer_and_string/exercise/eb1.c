#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = "OddLengthString";
    char *ptr1=arr, *ptr2= arr +sizeof(arr)-1;
    int i;
    for(i=0;ptr1!=ptr2; i++)
    {
        ++ptr1;
        --ptr2;
    }
   
    printf("%d\n",i);

    return 0;
}
/*The program never works completely as sizeof(arr) returns 16 -1 making it 15. so the actual string becomes even string even though the string says odd string hence thwe pointers never meet. */
