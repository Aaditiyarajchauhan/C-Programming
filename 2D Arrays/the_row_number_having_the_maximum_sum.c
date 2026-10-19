#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the element of matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int maxrow=0;
    int sumrow1=0;
    for(int i=0;i<r;i++){
        int sumrow2=0;
        for(int j=0;j<c;j++){
            sumrow2+=a[i][j];
        }
        if(sumrow1<sumrow2){
            sumrow1=sumrow2;
            maxrow=i+1;
        }
    }
    printf("The row which has maximum sum and it maximum sum value : %d and %d ",maxrow,sumrow1);
    return 0;
}