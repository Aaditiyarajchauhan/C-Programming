#include<stdio.h>
int main(){
    int num;
    printf("Enter the integer :");
    scanf("%d",&num);
    if(num<0){
        printf("Absolute value of %d is %d",num,-1*num);
    }
    if(num>=0){
        printf("Absolute value of %d is %d",num,num);
    }
    return 0;
}