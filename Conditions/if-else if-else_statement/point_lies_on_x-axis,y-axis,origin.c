#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the x and y points: ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("point lies on origin");
    }
    else if(y==0){
        printf("point lies on x-axis");
    }
    else if(x==0){
        printf("point lies on y-axis");
    }
    else{
        printf("point lies between x and y axis");
    }
    return 0;
}