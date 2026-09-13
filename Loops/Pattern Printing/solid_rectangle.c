/*

* * * * 
* * * * 
* * * * 

*/

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of line and stars in each line: ");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){ //outer loop --> no. of rows/no. of lines
        for(int j=1;j<=m;j++){  //inner loop --> no. of columns/no. of stars in each line
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 