/*

1 2 3 4 
1 2 3 
1 2 
1 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    /*
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    */
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=n;j>=i;j--){
            printf("%d ",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}