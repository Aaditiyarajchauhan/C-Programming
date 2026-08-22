#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    n>99 && n<1000 ? printf("It's three digit") : printf("It's not three digit");
    return 0;
}