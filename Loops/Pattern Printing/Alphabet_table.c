/*

A B C D E F G 
A B C   E F G 
A B       F G 
A           G 

*/

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    int a=(char)65;
    for(int i=1;i<=2*n-1;i++){
        printf("%c ",a);
        a++;
    }
    printf("\n");
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=n-1;i++){
        int b=(char)65;
        for(int j=1;j<=nst;j++){
            printf("%c ",b);
            b++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            b++;
        }
        for(int l=1;l<=nst;l++){
            printf("%c ",b);
            b++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}
