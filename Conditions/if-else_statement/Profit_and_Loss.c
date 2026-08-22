#include<stdio.h>
int main(){
    float sp,cp;
    printf("Enter the Selling price and Cost Price:");
    scanf("%f %f",&sp,&cp);
    if((sp-cp)>0){
        printf("profit = %0.2f",sp-cp);
    }
    else{
        if((sp-cp)<0){
        printf("loss = %0.2f",-1*(sp-cp));
        }
        else{
        printf("Neither profit nor loss");
        }
    }
    return 0;
}