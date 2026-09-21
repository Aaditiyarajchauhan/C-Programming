#include<stdio.h>
int main(){
    int a=5;
    int *x=&a;
    *x=7; //changed the value of *x to 7.(*x means 5 to change it into 7)
    printf("%d",a);
    return 0;
}