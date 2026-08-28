#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want :");
    scanf("%d",&n);
    float first_term=100;
    for(int i=1;i<=n;i++){
        printf("%f ",first_term);
        first_term=first_term/2;
    }
    return 0;
}