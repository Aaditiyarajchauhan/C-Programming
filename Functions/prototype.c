#include<stdio.h>
// prototype help in unordered function declaration 

void fun2(){
    printf("hi\n");
    void fun3();//prototype
    fun3();
    return;
}
int main(){
    void fun1();//prototype
    fun1();
    return 0;
}
void fun1(){
    printf("Hello\n");
    void fun2();//prototype
    fun2();
    return;
}
void fun3(){
    printf("Good morning\n");
    return ;
}