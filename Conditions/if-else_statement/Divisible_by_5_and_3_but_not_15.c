#include<stdio.h>
int main(){
    int num;
    printf("Enter the positive number: ");
    scanf("%d",&num);
    if(num%15!=0){
        if(num%3==0){
            printf("Divisible by 3");
        }
        else{
            if(num%5==0){
                printf("Divisible by 5");
            }
            else{
                printf("Not divisible by 5 or 3");
            }
        }
    }
    else{
        printf("It divisible by 15");
    }
    return 0;
}