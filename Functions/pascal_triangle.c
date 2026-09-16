/*

            1   
          1   1   
        1   2   1   
      1   3   3   1   
    1   4   6   4   1   
  1   5   10   10   5   1   
1   6   15   20   15   6   1   

*/

#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
    int a;
    printf("Enter the number of rows :");
    scanf("%d",&a);
    int nsp1=((2*a)/2)-1;
    for(int i=0;i<=a;i++){
        for(int space1=0;space1<=nsp1;space1++){
            printf("  ");
        }
        nsp1--;
        for(int j=0;j<=i;j++){
            int nCr=combination(i,j);
            printf("%d   ",nCr);
        }
        printf("\n");
    }
    return 0;
}
