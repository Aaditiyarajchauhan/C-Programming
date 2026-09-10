/*

      A 
    A B A 
  A B C B A 
A B C D C B A 

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char)(k+64);
            printf("%c ",ch);
            ch++;
        }
        int a=i-1;
        for(int l=1;l<=i-1;l++){
            char ch=(char)(a+64);
            printf("%c ",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}