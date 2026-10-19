#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the element of matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int r1,r2,c1,c2;
    printf("Starting coordinate:");
    scanf("%d %d",&r1,&c1);
    printf("Ending coordinate:");
    scanf("%d %d",&r2,&c2);
    int sum=0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum+=a[i][j];
        }
    }
    printf("The sum of element of rectangle from (%d,%d) to (%d,%d) is: %d",r1,c1,r2,c2,sum);
    return 0;
}