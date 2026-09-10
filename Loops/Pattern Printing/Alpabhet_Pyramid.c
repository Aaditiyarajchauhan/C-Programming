/*

      A 
    A B C 
  A B C D E 
A B C D E F G 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){
            printf("%c ",a);
            a++;
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}
