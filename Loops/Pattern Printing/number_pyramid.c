/*

      1 
    1 2 3 
  1 2 3 4 5 
1 2 3 4 5 6 7 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int l=1;l<=a;l++){
            printf("%d ",l);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}