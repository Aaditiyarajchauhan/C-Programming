#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    int sum,reverse=0;
    for(int i=0;n>0;i++){
        reverse=reverse*10;
        reverse=reverse+(n%10);
        n=n/10;
    }
    sum=temp+reverse;
    printf("The given number is: %d\n",temp);
    printf("The reverse number is: %d\n",reverse);
    printf("The sum of both reversed number with given number: %d",sum);
    return 0;
}