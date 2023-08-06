#include<stdio.h>
int main()
{
    int d=40;
    int a=10;
    int c=30;
    int b=20;
   
    int *arr[4]= {&a,&b,&c,&d};
    printf("(arr+i)\t    *(arr+i)\t *(*(arr+i))\t\n");
    
    for(int i=0; i<4; i++)
    {
        printf("%u %u %d\n", (arr+i), *(arr+i), *(*(arr+i)));
    }
    printf("\n");
    return 0;
      
}
