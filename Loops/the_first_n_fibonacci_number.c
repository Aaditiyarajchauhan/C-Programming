#include<stdio.h>
int main(){
    int n,fib;
    int f1=0;
    int f2=1;
    printf("Enter the n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",f1);
        fib=f1+f2;
        f1=f2;
        f2=fib;   
    }
    return 0;
}