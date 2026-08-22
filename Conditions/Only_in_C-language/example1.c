#include<stdio.h>
int main(){
    if(3+2%5)//in bracket is anything which is true then it's work
             //in bracket any integer ,character except 0 is true and if 0 then it is false it's not work
        printf("This Works\n");
    int a;
    if(a=10)
        printf("Even this works\n");
    if(-5)
        printf("Suprisingly even this works\n");
    if(a=0)
        printf("This not works\n");
    if('!')
        printf("Hello\n");
    return 0;
}