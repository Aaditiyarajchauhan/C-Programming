/*

1 
A B 
1 2 3 
A B C D 
1 2 3 4 5 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char A='A';
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                printf("%c ",A);
                A++;
            }
        }
        printf("\n");
    }
    return 0;
}