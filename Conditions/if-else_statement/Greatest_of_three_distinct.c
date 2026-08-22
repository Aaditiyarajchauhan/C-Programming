#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three positive integer: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a = %d is the greatest number",a);
        }
        else{
            printf("c = %d is the greatest number",c);
        }
    }
    else{
        if(b>c){
            printf("b = %d is the greatest number",b);
        }
        else{
            printf("c = %d is the greatest number",c);
        }
    }
    return 0;
}