// you have n*m grid and staring point (1,1) to reach your destination (m,n) and you can go "Down" and "Right" and every time you can take only 1 step at a time. so how many number of ways you have?
#include<stdio.h>
int maze(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1) rightways+=maze(n,m-1);//only take rightway
    if(m==1) downways+=maze(n-1,m);///only take downways
    if(n>1 && m>1){
        rightways+=maze(n,m-1);
        downways+=maze(n-1,m);
    }
    int ways=downways+rightways;
    return ways;
}
int main(){
    int n,m; //n for rows and m for columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&n,&m);
    int ways=maze(n,m);
    printf("the number of ways are to reach to your destination : %d",ways);
    return 0;
}  