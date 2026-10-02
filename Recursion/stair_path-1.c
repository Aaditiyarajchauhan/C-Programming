// single step , double step you can take on stair . So how number of ways so the person reaches nth stair.

#include<stdio.h>

// int stair(int n){
//     if(n<=2) return n;
//     int a=stair(n-1);
//     int b=stair(n-2);
//     int c=a+b;
//     return c;
// }

int stair(int n){
    if(n==1 || n==2) return n;
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    printf("Enter the number of stair is : ");
    scanf("%d",&n);
    printf("the number of ways to climb or dismount the %d stair is : %d",n,stair(n));
    return 0;
}
