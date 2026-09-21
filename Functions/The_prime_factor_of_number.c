#include<stdio.h>
int primefactor(int n){
    int factor=2;
    while(n>1){
        if(n%factor==0){
            printf("%d ",factor);
            n=n/factor;
        }
        else{
            factor++;
        }
    }
    return factor;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    primefactor(n);
    return 0;
}