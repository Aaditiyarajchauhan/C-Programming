#include<stdio.h>
int main(){    
    printf("Armstrong numbers between 1 and 500 are:\n");
    int r,sum,temp;
    for(int i=1;i<=500;i++){
        sum=0;
        temp=i;
        while(temp!=0){
            r=(temp%10);
            r=r*r*r;
            sum=sum+r;
            temp=temp/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
    return 0;
}