#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%15!=0){
        if(a%3==0 || a%5==0){                      //  ((a%3==0 || a%5==0) && a%15!=0) 
            printf("it is divisible by 3 or 5");
        }
        else{
            printf("it is not divisible by 3 or 5");
        }
    }
    else{
        printf("it is divisible by 15");
    }
    return 0;
}