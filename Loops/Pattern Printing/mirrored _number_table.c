/*

1 2 3 4 3 2 1 
1 2 3   3 2 1 
1 2       2 1 
1           1 

*/

#include<stdio.h>
#include <stdio.h>

int main(){   
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    for(int j=n-1;j>0;j--){
        printf("%d ",j);
    }
    printf("\n");
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=n-1;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int l=1;l<=nst;l++){
            a--;
            printf("%d ",a);
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}
    