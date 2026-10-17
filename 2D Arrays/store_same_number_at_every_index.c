#include<stdio.h>
int main(){
    int num,r,c;
    printf("Enter the number want to store:");
    scanf("%d",&num);
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=num;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}