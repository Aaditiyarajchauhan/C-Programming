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
    printf("spiral order of matrix :\n");
    int minrow=0;
    int maxrow=r-1;
    int mincol=0;
    int maxcol=c-1;
    int totalelement=r*c;
    int count=0;

    // in these questions we print reverse array not store reverse array so don't be confused

    while(count<totalelement){
        for(int i=mincol;i<=maxcol && count<totalelement;i++){
            printf("%d ",a[minrow][i]);
            count++;
        }
        minrow++;
        for(int j=minrow;j<=maxrow && count<totalelement;j++){
            printf("%d ",a[j][maxcol]);
            count++;
        }
        maxcol--;
        for(int k=maxcol;k>=mincol && count<totalelement;k--){
            printf("%d ",a[maxrow][k]);
            count++;
        }
        maxrow--;
        for(int l=maxrow;l>=minrow && count<totalelement;l--){
            printf("%d ",a[l][mincol]);
            count++;
        }
        mincol++;
    }
    return 0;
} 