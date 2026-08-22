#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("it is divisible by 5 and 3 both");
    }
    else {
        printf("it is not divisible by 5 and 3 both");
    }
    return 0;
}