#include<stdio.h>
int main(){
    int num;
    printf("Enter the positive number: ");
    scanf("%d",&num);
    if(num%5==0){
        printf("Divisible by 5");
    }
    if(num%5!=0){
        printf("Not divisible by 5");
    }
    return 0;
}