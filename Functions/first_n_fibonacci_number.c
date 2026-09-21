#include<stdio.h>
void fib(int n){
    int ft=0;
    int st=1;
    for(int i=1;i<=n;i++){
        printf("%d ",ft);
        int fib=ft+st;
        ft=st;
        st=fib;
    }
    return ;
}
int main(){
    int n,fibonacci;
    printf("Enter the n:");
    scanf("%d",&n);
    fib(n);
    return 0;
}