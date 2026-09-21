#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;   //it stored the address of (a)
    int** y=&x;  //it stored the address of a pointer(int* x)
    int*** z=&y;
    printf("%p\n",x);  //it give me the address of (a)
    printf("%p\n",&x); //it give me the address of pointer (x)
    printf("%p\n",y);  //it give me the address of (x)
    printf("%p\n",*y); //it give me the address of (a)
    printf("%d\n",a);
    printf("%d\n",*x); //it give me the value of (address of a) 
    printf("%d\n",**y);//it give me the value of (address of x) and value of address of x is (address of a)
    printf("%d",***z);
    return 0;
}