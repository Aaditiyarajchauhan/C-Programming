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
    // Without using third variable
    a=a+b;
    b=a-b;
    a=a-b;
    //Using third variable
    /*
    int temp;
    temp=a;
    a=b;
    b=temp;
    */
    printf("a=%d\nb=%d",a,b);
    return 0;
}