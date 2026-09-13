#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    int temp;
    while(n!=0){
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("Sum of all digits : %d",sum);
    return 0;
}