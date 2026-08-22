#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Brother1: ");
    scanf("%d",&a);
    printf("Enter the Brother2: ");
    scanf("%d",&b);
    printf("Enter the Brother3: ");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("Brother1 = %d is the youngest Brother1",a);
    }
    else if(b<a && b<c){
        printf("Brother2 = %d is the youngest Brother2",b);
    }
    else{
        printf("Brother3 = %d is the youngest Brother3",c);
    }
    return 0;
}