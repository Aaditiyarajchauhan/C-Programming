/*

1 
1 3 
1 3 5 
1 3 5 7 

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    /*
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i*2;j++){
            if(j%2!=0){
                printf("%d",j);
            }   
        }
        printf("\n");
    }
    */
    return 0;
}