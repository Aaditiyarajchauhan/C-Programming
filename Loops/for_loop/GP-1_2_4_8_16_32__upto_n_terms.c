#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want : ");
    scanf("%d",&n);
    int temp=1;
    for(int i=0;i<n;i++){
        printf("%d ",temp);
        temp=temp*2;
    }
    return 0;
}