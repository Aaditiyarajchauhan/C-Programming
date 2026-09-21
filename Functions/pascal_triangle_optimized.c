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
int main(){
    int a;
    printf("Enter the number of rows :");
    scanf("%d",&a);
    int nsp=a;
    for(int i=0;i<=a;i++){
        for(int space=1;space<=nsp;space++){
            printf("  ");
        }
        int first=1;
        for(int j=0;j<=i;j++){ 
            printf("%d   ",first);
            first=first*(i-j)/(j+1); //iCj1=iC(j+1)
        }
        nsp--;
        printf("\n");
    }
    return 0;
}
