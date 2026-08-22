#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the num1: ");
    scanf("%d",&a);
    printf("Enter the num2: ");
    scanf("%d",&b);
    printf("Enter the num3: ");
    scanf("%d",&c);
    printf("Enter the num4: ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("a = %d is the greatest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("b = %d is the greatest number",b);
    }
    else if(c>a && c>b && c>d){
        printf("b = %d is the greatest number",c);
    }
    else{
        printf("d = %d is the greatest number",d);
    }
    return 0;
}