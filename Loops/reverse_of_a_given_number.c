#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    /*
    int reverse=0,temp;
    while(n!=0){
        temp=n%10;
        reverse=(reverse+temp)*10;
        n=n/10;
    }
    printf("Reverse of a number : %d ",reverse/10);
    */
    int reverse=0;
    while(n!=0){
        reverse=reverse*10;
        reverse=reverse+(n%10);
        n=n/10;
    }
    printf("Reverse of a number : %d ",reverse);
    return 0;
}