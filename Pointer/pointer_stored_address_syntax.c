#include<stdio.h>
/* SYNTAX
    for store address we need int* variable_name_1 or int *variable_name_1
    datatype* variable_name_1=&variable_name2;
    datatype *variable_name_1=&variable_name2;

    * means pointer
    & means address
    variable_name_1 is to store address value
    variable_name_2 which address to store
   
*/
//example
int main() {
    int a=5;

    //this is valid
    int *x=&a; 

    /*
    this is invalid because of *x (*x means give the value of store address in x)
    int* x;
    *x =&a;
    */

     // Prints the memory address of the variable 'a'
    printf("this is the address of a %p\n",&a); 

    // Prints the memory address of variable 'a' (stored in x)
    printf("this is the address of a %p\n",x); 

    // Prints the memory address of the pointer variable 'x' itself
    printf("this is the address of x %p\n",&x); 

    // Dereferences x to print the integer value stored in 'a' (5)
    printf("this is the value of a : %d\n",*x); 

    return 0;
}