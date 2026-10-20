#include<stdio.h>
void matrice(int r,int c,int a[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    return;
}

int main(){
    int r1,c1,r2,c2;

    //input row and columns
    printf("Enter the rows and colums of matrices A : ");
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    printf("Enter the rows and colums of matrices B : ");
    scanf("%d %d",&r2,&c2);
    int b[r2][c2];

    //check
    if(c1!=r2){
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    //input elements
    printf("Matrix 1:\n");
    matrice(r1,c1,a);
    printf("Matrix 2:\n");
    matrice(r2,c2,b);

    //result
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            // i row of a[][] and j column of b[][]
            // a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j].......+a[i][n]*b[n][j];
            // that 0,1,2...,n is signified in k
            c[i][j]=0;
            for(int k=0;k<c1;k++){ // for(int k=0;k<r2;k++)
                // k is the column of the matrix A or the row of matrix B
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    //print result
    printf("After multiplication\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}