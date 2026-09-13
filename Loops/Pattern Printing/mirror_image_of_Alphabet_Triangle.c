/*

      A 
    A B 
  A B C 
A B C D

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}