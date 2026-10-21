#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns of matrix :");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the element of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0];
    int min=a[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min)
                min=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==max){
                    printf("\nFor Maximum\n");
                    printf("Element: %d\n",max );
                    printf("Index: arr[%d][%d]\n",i,j);
            }
            if(a[i][j]==min){
                printf("\nFor Minimum\n");
                printf("Element: %d\n",min );
                printf("Index: arr[%d][%d]\n",i,j);
            }
        }
    }
    return 0;
}