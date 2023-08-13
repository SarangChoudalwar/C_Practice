#include<stdio.h>
int main()
{
    char *p = "Hello";
    *p = 'M'; /* Changing the value of index 0 of string Hello works */
    p = "BYE"; /* Changing the base pointer to different address works */
    
    const char *q = "Hello";
    *q = "M";/* Changing the value of index 0 of string Hello does not works */
    q = "Bye" ;/* Changing the base pointer to different address works */ 
    
    char const *r = "Hello ";
    *r = "M";/* Changing the value of index 0 of string Hello does not works */
    r = "Bye" ;/* Changing the base pointer to different address works */ 
   
    char * const s = "Hello";
    *s = "M"; /* Changing the value of index 0 of string hello works */
    s= "Bye"; /* Changinf the base address to point to different location does not work. i.e. pointer address cannot be changed */
    
    const char * const t = "Hello";
    *t = "M"; /* changing the value of string does not work */
    t = "BYE"; /* the pointer cannot change the base address as well */ 
}
