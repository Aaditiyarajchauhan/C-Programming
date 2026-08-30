#include<stdio.h>
int main(){
    int count=0;
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;n>0;i++){
        n=n/10;
        count=count+1;
    }
    printf("Number of digit : %d",count);
    return 0;
}