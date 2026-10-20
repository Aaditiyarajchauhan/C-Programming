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
    printf("Transpose:\n");
    int b[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}