/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        int a=i-1;
        for (int l=1;l<=i-1;l++){
            printf("%d ",a);
            a--;
        }
        /*
        for(int l=1;l==1;l++){
            for(int m=i-1;m>0;m--){
                printf("%d ",m);
            }
        }
        */
        printf("\n");
    }
    return 0;
}
