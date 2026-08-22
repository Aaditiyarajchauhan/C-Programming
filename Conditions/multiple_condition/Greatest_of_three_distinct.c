#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the num1: ");
    scanf("%d",&a);
    printf("Enter the num2: ");
    scanf("%d",&b);
    printf("Enter the num3: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a = %d is the greatest number",a);
    }
    else if(b>a && b>c){
        printf("b = %d is the greatest number",b);
    }
    else{
        printf("c = %d is the greatest number",c);
    }
    return 0;
}