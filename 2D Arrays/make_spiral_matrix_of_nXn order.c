#include<stdio.h>
int main(){

    // take row and column value
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    //Matrix A
    int a[n][n];

    // enter element
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    } 

    // initilized value
    int minrow=0;
    int maxrow=n-1;
    int mincol=0;
    int maxcol=n-1;
    int count=0;

    //Matrix B
    int b[n][n];

    while(minrow<=maxrow && mincol<=maxcol){
        for(int i=mincol;i<=maxcol;i++){
            b[minrow][i]=a[count/n][count%n];
            count++;
        }
        minrow++;
        for(int j=minrow;j<=maxrow;j++){
            b[j][maxcol]=a[count/n][count%n];
            count++;
        }
        maxcol--;
        if(minrow<=maxrow){
            for(int k=maxcol;k>=mincol;k--){
                b[maxrow][k]=a[count/n][count%n];
                count++;
            }
            maxrow--;
        }
        if(mincol<=maxcol){
            for(int l=maxrow;l>=minrow;l--){
                b[l][mincol]=a[count/n][count%n];
                count++;
            }
            mincol++;
        }
    }

    printf("Spiral matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    } 
    return 0;
} 