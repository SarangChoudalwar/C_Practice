#include<stdio.h>
struct a
{
    char city [3][20];
    char state [3][20];
};

int main()
{
    struct a arr = {
                    {
                        "Nagpur",
                        "Mumbai",
                        "Banagalore"
                    },

                    {
                        "Maharashtra",
                        "Maharashtra",
                        "Karnataka"
                    }
                    };  

    printf("%s %s\n", arr.city , arr.state);
    printf("%s %s\n", arr.city+2 , arr.state+2);

    /*Should print Nagpur Maharashtra and
      Bangalore Karnataka */
  
    return 0;
}
