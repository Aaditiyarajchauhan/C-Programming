/*
              TOWER OF HANOI for 3 disk

        SOURCE          HELPER        DESTINATION
          A               B               C
          |               |               |
         [1]              |               |
        [===]             |               |
         [2]              |               |
       [=====]            |               |
         [3]              |               |
     [=========]          |               |
     -------------   ------------    -----------

*/

#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;//base condition
    int power=powerlog(a,b/2);//recursive call
    if(b%2==0) return power*power;//code 
    else return power*power*a;//code
}
void toh(int n,char s,char h,char d){
    if(n==0) return; //base condition when number of disks zero
    toh(n-1,s,d,h); //recursive call one disk you move so n-1.we move top(n-1) disk or (n-1)pyramid source to helper i.e, right now own destination is helper so, d become h and h become d
    printf("%c -> %c\n",s,d); //largest disk move to source to destinaation i.e, it print which disk goes to source to destination
    toh(n-1,h,s,d);  //recursive call we move top(n-1) or (n-1)pyramid disk helper to destination i.e, right now own helper is source so, s become h and s become h
    return;
}
int main(){
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    printf("Minimum number of moves is : %d\n",powerlog(2,n)-1);
    toh(n,'A','B','C');
    return 0;
}