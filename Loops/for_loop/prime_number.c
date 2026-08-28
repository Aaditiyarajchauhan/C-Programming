#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break; //break keyword come out from the loop
        }
    }
    if(n==1||n==0){
        printf("neither prime nor composite");
    }
    else if(a==0){
        printf("it is a prime number");
    }
    else if(a==1){
        printf("it is a composite number");
    }
    return 0;
}