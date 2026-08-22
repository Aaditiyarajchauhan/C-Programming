#include<stdio.h>
int main(){
    int remainder,quotient,divisor,dividend;
    printf("Enter the divisor:");
    scanf("%d",&divisor);
    printf("Enter the dividend:");
    scanf("%d",&dividend);
    quotient=dividend/divisor;
    remainder=dividend-quotient*divisor;
    printf("Remainder = %d",remainder);//remainder=dividend%divisor
    return 0;
}