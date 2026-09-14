#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int permutation(int n,int r){
    return factorial(n)/factorial(n-r);
}
int main(){
    int n,r;
    printf("Enter the n and r:");
    scanf("%d %d",&n,&r);
    int per=permutation(n,r);
    int com=combination(n,r);
    printf("permutation:%d\ncombination:%d ",per,com);
    return 0;
}