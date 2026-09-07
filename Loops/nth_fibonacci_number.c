#include<stdio.h>
int main(){
    int n,fib=1;
    int t1=0,t2=1;
    printf("Enter the nth term:");
    scanf("%d",&n);
    if(n==1){
        printf("The 1 terms is : 0");
    }
    else{
         for(int i=1;i<=n-2;i++){
        fib=t1+t2;
        t1=t2;
        t2=fib;
        }
        printf("The %d terms is : %d",n,fib);
    }
    return 0;
}