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
    int maxCount=0;
    int maxInd=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(a[i][j]==1) count++;
        }
        if(maxCount<count){
            maxCount=count;
            maxInd=i+1;
        }
    }
    printf("The row which has maximum number of 1's is : %d ",maxInd);
    return 0;
}