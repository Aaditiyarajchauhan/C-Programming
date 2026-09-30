#include<stdio.h>
void pip(int n){
    if(n==0) return;
    printf("pre:%d\n",n);
    pip(n-1);
    printf("in:%d\n",n);
    pip(n-1);
    printf("post:%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    pip(n);
    return 0;
}