#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want : ");
    scanf("%d",&n);

    /*
    with mathematices
    for nth term AP is a+(n-1)*d   a=first term,n=number of term,d=difference 
    for(int i=4;i<=4+(n-1)*3;i=i+3){
        printf("%d ",i);
    }
    */

    //without mathematices
    int temp=4;
    for(int i=1;i<=n;i++){
        printf("%d ",temp);
        temp=temp+3;
    }
    return 0;
}