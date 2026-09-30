// you have n*m grid and staring point (1,1) to reach your destination (m,n) and you can go "Down" and "Right" and every time you can take only 1 step at a time. so how many number of ways you have?
#include<stdio.h>
/*
cr=current row
cc=current column
er=ending row
ec=ending column
*/
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){ //only rightways call
        rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ //only downways call
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n,m; //n for rows and m for columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&n,&m);
    int ways=maze(1,1,n,m);
    printf("the number of ways are to reach to your destination : %d",ways);
    return 0;
}