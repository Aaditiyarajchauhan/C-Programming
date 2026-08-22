#include<stdio.h>
int main(){
    int n;
    printf("Enter the year: ");
    scanf("%d",&n);
    ((n%4==0 && n%100!=0)|| n%400==0) ? printf("It's a leap year") : printf("It's not a leap year");
    return 0;
}