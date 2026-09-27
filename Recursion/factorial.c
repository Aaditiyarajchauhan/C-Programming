#include<stdio.h>
int factorial(int n){ 
    if(n==1 || n==0) return 1; //base condition
    int fact=n*factorial(n-1); //recursice case
    return fact;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int rec=factorial(n);
    printf("the factorial of n  is %d",rec);
    return 0;
}