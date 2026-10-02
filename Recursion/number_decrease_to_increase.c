#include<stdio.h>
void dec_to_inc(int n){
    if(n==0) return ;
    printf("%d\n",n);
    dec_to_inc(n-1);
    printf("%d\n",n);
    return ;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    dec_to_inc(n);
    return 0;
}