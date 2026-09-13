/*

****
***
**
*

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("*");
        }
        a--;
        printf("\n");
    }

    /*
    for(int i=1;i<=n;i++){      
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    */    

    /*
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    */
   
    return 0;
}