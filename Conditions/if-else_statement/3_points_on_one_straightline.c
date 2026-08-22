#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the x1,y1 points: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the x2,y2 points: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the x3,y3 points: ");
    scanf("%d %d",&x3,&y3);
    /*
    float temp;
    temp=(x3*(y1-y2)+x1*(y2-y3)+x2*(y3-y1))/2;
    if(temp==0){
        printf("all point on straight line");
    }
    else{
        printf("not on stright line");    
    }
    */
    float m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("all point on straight line");
    }
    else{
        printf("Not all point on stright line");    
    }
    return 0;
}