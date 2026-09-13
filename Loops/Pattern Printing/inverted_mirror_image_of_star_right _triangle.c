/*

* * * * 
  * * * 
    * * 
      * 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of row:");
    scanf("%d",&n);
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        nsp++;
        for(int j=n;j>=i;j--){
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}