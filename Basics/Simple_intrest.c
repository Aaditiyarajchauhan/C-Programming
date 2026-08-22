#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("Enter the Principal: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%d",&r);
    printf("Enter the time: ");
    scanf("%d",&t);
    si=(float)p*r*t/100;
    printf("Simple Intrest: %f",si);
    return 0;
}