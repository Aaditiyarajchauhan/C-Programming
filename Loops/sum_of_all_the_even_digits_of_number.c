#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    int last_digit;
    for(int i=1;n>0;i++){
        last_digit=n%10;
        if(last_digit%2==0){
            sum=sum+last_digit;
        }
        n=n/10;
    }
    printf("Sum of all even digits : %d",sum);
    return 0;
}