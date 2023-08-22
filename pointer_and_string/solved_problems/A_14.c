#include<stdio.h>
int main()
{
    static char *s[]={
                        "ice",
                        "green",
                        "cone",
                        "please"
                        };
    static char **ptr[] ={ s+3, s+2, s+1, s};
    char ***p = ptr;
    printf("%s\n",**++p);
    printf("%s\n",*--*++p+3);
    printf("%s\n",*p[-2] +3);
    printf("%s\n",p[-1][-1]+1);
    return 0;
}
/*
    considering 16 bit architecture hence  the address is 16 bit wide

    |=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=| 
    |i|c|e|0|g|r|e|e|n|0|c|o|n|e|0|p|l|e|a|s|e|0|
    |=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=| 
    1000    1004        1010      1015

        s[0]                s[1]            s[2]                s[3]
    * * * * * * * * *  * * * * * * * * *  * * * * * * * * *  * * * * * * * * *  
    * 1 0 0 0       *  * 1 0 0 4       *  *1 0 1 0        *  * 1 0 1 5       *  
    * * * * * * * * *  * * * * * * * * *  * * * * * * * * *  * * * * * * * * *  
    4006               4008               4010               4012

       ptr[0]              ptr[1]              ptr[2]              ptr[3]   
      * * * * * * * * *  * * * * * * * * *  * * * * * * * * *  * * * * * * * * * 
      * 4 0 1 2       *  *4 0 1 0        *  *4 0 0 8        *  * 4 0 0 6       *  
      * * * * * * * * *  * * * * * * * * *  * * * * * * * * *  * * * * * * * * *
      6020               6022               6024               6026     

              p                    
      * * * * * * * * *
      * 6 0 2 0       *
      * * * * * * * * *
      7010


    p = {6020}
    ++p = 6022 and not 6021 as c compiler increments according to the pointer type. 
    hence printf("%s\n", **++p) points to 6022->4010->1010 = base address of cone hence it prints cone.
    
    the p now contains address 6022 

    *--*++p+3
    ++p = 6024 -> 4008 decrement by 1 is 4006->1000 base address of string ice now +3 points to 1013 memory location which is having "\0" hence nothing is printer here but the p now points to 6024.

    *p[-2]+3
    p[-2] will not point to 6020 -> 4012->1015 base address of please +3 will point to 1018 so it will print "ase". Pointer p is still pointing to 6024.

    p[-1][-1]+1
    p[-1][-1] -> 6022->4010 - 1 -> 4008->1004 (base address of green) +1 prints reen. p is still pointing to 6024.
    
 
*/
