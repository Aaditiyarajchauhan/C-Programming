#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want : ");
    scanf("%d",&n);
    //nth term is a+(n-1)*d   a=first term,n=number of term,d=difference 
    for(int i=1;i<=1+(n-1)*2;i=i+2){
        printf("%d ",i);
    }
    return 0;
}