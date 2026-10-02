#include<stdio.h>
//multiple call
int fibonacci(int n){
    if(n==1) return 0;//base condition
    if(n==2) return 1;//base condition
    int fib=fibonacci(n-1)+fibonacci(n-2);//recursive call
    return fib;
}
int main(){
    int n;
    printf("Enter the value of n position: ");
    scanf("%d",&n);
    printf("ficbonacci number at position %dth  is : %d",n,fibonacci(n));
    return 0;
}