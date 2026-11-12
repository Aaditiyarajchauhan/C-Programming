#include<stdio.h>
typedef int* pointer;
int main(){
    int x=3,y=2;
    
    /* 
    -------if we not use typedef------
    int* a=&x,b=&y;  give error because a is a pointer stored box but b is integer box
    int* a,b; give error because it make int* a ,int b 
    */

    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b); 
    return 0;
}