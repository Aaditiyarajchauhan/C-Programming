#include<stdio.h>
int main(){
    int n;
    printf("Enter the number table you want:");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d X %d = %d\n",n,i/n,i);
    }
    return 0;
}