#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want : " );
    scanf("%d",&n);
    int temp=3; 
    for (int i=1;i<=n;i++){
        printf("%d ",temp);
        temp=temp*4;
    }
    return 0;
}