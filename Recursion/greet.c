#include<stdio.h>
void wish(int n){
    if(n==0) return ; //base case
    printf("Good Morning\n");
    wish(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    wish(n);
    return 0;
}