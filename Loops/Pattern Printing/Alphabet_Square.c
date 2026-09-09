/*

A B C D 
A B C D 
A B C D 
A B C D 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char A='A';
        for (int j=1;j<=n;j++){
            printf("%c ",A);
            A=A+1;
        }
        printf("\n");
    }
    return 0;
}