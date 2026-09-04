#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of number: %d",fact);
    return 0;
}