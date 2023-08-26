--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
a)
Note :- all of them result in same. Different type of writing the structure elements

struct player
{
    char name[20];
    int age;
};
struct player p1= {"Nick yates", 30};

struct player
{
    char name[20];
    int age;
}p1 = {"Nick yates",30};

struct 
{
    char name[20];
    int age;
}p1={"Nick yates",30};

--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
b)
Note :- the value of 1 strcuture variable can be assigned to value of other 
    structure variable if they are of same type using the assignment operator.
    It is not necessary to copy the structure elements piece by piece, for example

struct player
{
    char name[20];
    int age;
}

struct player p2,p1 = {"Nick yates", 30};
p2=p1;
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
c)
Note :- One structure can be within the other structure as shown below.
struct part
{
    char type;
    int qty;
}

struct vehicle
{
    char maruti[20];
    struct part bolt;
};

struct vehicle v1;
v1.bolt.type = "c";
v1.bolt.qty = 20;
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
d)
Note :- Like a ordinary variable a structure variable can also be passed to 
a function. We may either pass indiviudal structure elements or the entire
structure at one go. If need be we can also pass address of the structure elements or
address of the structure variable as shown below.

struct player
{
    char nam[20];
    int age;
};

struct player p1 = {"Nick yates",30};
display(p1.name,p1.age);/* passing individual elements */
show(p1);/* passing structure variable */
d(p1.name, &p1.age);/* passing address of structure variable */
print(&p1) /* passing address of the structure variable*/
