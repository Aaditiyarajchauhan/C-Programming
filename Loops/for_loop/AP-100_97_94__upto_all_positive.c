#include<stdio.h>
int main(){
    /*
    for(int i=100;i>=0;i=i-3){
        printf("%d ",i);
    }
    */
    /*
    int first_term=100;
    for(int i=1;first_term>0;i++){
        printf("%d ",first_term);
        first_term=first_term-3;
    }
    */
    int n;
    printf("Enter the number of positive terms you want :");
    scanf("%d",&n);
    int first_term=100;
    for(int i=1;i<=n;i++){
        if(first_term>0){
            printf("%d ",first_term);
            first_term=first_term-3;
        }
    }
    return 0;
}