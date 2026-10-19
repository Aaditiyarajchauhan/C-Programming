#include<stdio.h>
int main(){
    int r,c;
    int sum=0;
    printf("Enter the number of rows and columns of matrix :");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the element of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
    }
    printf("the sum of all element in the matrix is : %d",sum );
    return 0;
}