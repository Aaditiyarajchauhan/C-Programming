#include<stdio.h>
void swap(int a ,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\nb=%d",a,b);
    return;
}
int main(){
    int a,b;
    printf("Enter the number a : ");
    scanf("%d",&a);
    printf("Enter the number b : ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}