// single step , double step and triple step you can take on stair . So how number of ways so the person reaches nth stair.
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of stair is : ");
    scanf("%d",&n);
    printf("the number of ways to climb or dismount the %d stair is : %d",n,stair(n));
    return 0;
}