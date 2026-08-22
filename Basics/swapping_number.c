#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Before swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    printf("After swapping\n");
    printf("a=%d\nb=%d",b,a);
    return 0;
}