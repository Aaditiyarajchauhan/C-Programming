#include<stdio.h>
void matrice(int r,int c,int a[r][c]){
    printf("Enter the element of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    return;
}
int main(){
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    int sum[r][c];
    int a1[r][c];
    int a2[r][c];
    printf("MATRIX 1\n");
    matrice(r,c,a1);
    printf("MATRIX 2\n");
    matrice(r,c,a2);
    printf("Sum of MATRIX 1 + MATRIX 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a1[i][j]+a2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}