#include<stdio.h>
int main()
{
    char str[]= "Way of trouble is out through it";
    int i;
    
    for(i=0;i<=3;i++)
        printf("%c",*(str+i));
    for(i=0;i<=3;i++)
        printf("%c",*(str+18+i));
    for(i=0;i<=13;i++)
        printf("%c",*(str+4+i));
    for(i=0;i<=9;i++)
        printf("%c",*(str+22+i));
    return 0;
}

/*
0 W
1 a
2 y
3 
4 o
5 f
6 
7 t
8 r
9 o
10 u
11 b
12 l
13 e
14 
15 i
16 s
17 
18 o
19 u
20 t
21 
22 t
23 h
24 r
25 o
26 u
27 g
28 h
29 
30 i
31 t
32 \0

Way out of trouble is through it
*/
