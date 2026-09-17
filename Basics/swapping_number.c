#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Before swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    /*
    This is wrong method
    printf("After swapping\n");
    printf("a=%d\nb=%d",b,a);
    */
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping\n");
    printf("a=%d\nb=%d",a,b);
    return 0;
}