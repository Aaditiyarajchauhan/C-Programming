#include<stdio.h>
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int HCF(int a,int b){
    int gcd;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break; 
        }
    }
    return gcd;
}
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int gcd=HCF(a,b);
    printf("the greatest common divisor : %d",gcd);
    return 0;
}