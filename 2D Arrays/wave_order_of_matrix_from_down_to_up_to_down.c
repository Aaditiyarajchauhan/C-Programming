#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("wave order of matrix :\n");
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=r-1;i>=0;i--){
                printf("%d ",a[i][j]);
            }
        }  
        else{
            for(int i=0;i<r;i++){
                printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}