/*

   *
  ***
 *****
*******

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int nst=1;//number of stars
    int nsp=n-1;//number of spaces
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    /*
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }
    */
    /*
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int l=1;l<i;l++){
            printf("*");
        }
        printf("\n");
    }
    */
    return 0;
}
