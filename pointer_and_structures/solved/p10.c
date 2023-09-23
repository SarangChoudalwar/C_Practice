#include<stdio.h>

struct s1
{
    char *str;
    struct s1 *next;
};

/* Swap function to swap the string of the 2 dimenstional array but the pointer remains the same */
void swap(struct s1 *p1, struct s1 *p2)
{
    char *temp;
    temp = p1->str;
    p1->str = p2->str;
    p2->str = temp;
}

int main()
{
    static struct s1 arr[] = {
                                {"Akhil", arr+1},
                                {"Nikhil",arr+2},
                                {"Anant", arr}
                             };
    struct s1 *p[3];
    int i;
    
    for(i=0; i<=2; i++)
    {
        p[i]=arr[i].next;
    }

    /* After the for loop p is pointing to following structure 
     {"Nikhil", arr+2},
     {"Anant", arr},
     {"Akhil", arr+1} */

    printf("%s %s %s\n", p[0]->str, (*p)->str, (**p).str);
    /* This should print all as the first element of the 2 dimenstional string i.e. 3 times Nikhil */

    /*Before swap it would be something like this 
     p pointing to
     {"Nikhil", arr+2},
     {"Anant", arr},
     {"Akhil", arr+1} 
    
    arr pointting to 
    
    {"Akhil", arr+1},
    {"Nikhil",arr+2},
    {"Anant", arr}

    */
    
    swap(*p, arr);
    /* after swapping it would be something like this 
     p pointing to
     {"Akhil", arr+2},
     {"Anant", arr},
     {"Akhil", arr+1} 
    
    arr pointting to 
    
    {"Nikhil", arr+1},
    {"Nikhil",arr+2},
    {"Anant", arr}  */

    printf("%s\n", p[0]->str);
    printf("%s\n",(*p)->str);
    printf("%s\n",(*p)->next->str);

    /* expected outpt is
    Akhil 
    Akhil 
    Anant 
    here note that *p is pointing to complete row of the 2d array and *p->next would point to 1st row of the p */

    swap(p[0], p[0]->next);
    /* After swapping p[] is now pointing to 
     {"Anant", arr+2},
     {"Akhil", arr},
     {"Akhil", arr+1} 
    */

    printf("%s\n",p[0]->str);
    printf("%s\n",(++p[0])->str);
    printf("%s\n",++(*++(*p)->next).str);
   
    /*Expected output is 
    Anant
    Akhil
    nant
    */
     
	return 0;
}
