/*

          *
       *  *
    *  *  *
 *  *  *  * 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){ //This loop is used for spaces
            printf("   ");
        }
        for(int k=1;k<=i;k++){ //After space print that loop work add our statement.
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}   
