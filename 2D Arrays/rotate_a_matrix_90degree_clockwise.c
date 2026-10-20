#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a[n][n];

    //input
    printf("Enter the element of matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){ //for(int j=0;j<=i;j++)
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    //reverse
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
        }
    }

    //print
    printf("After 90 degree rotation:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
} 