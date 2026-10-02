#include<stdio.h>
/*

//parameterized way

void sum(int n,int s){ //base condition
    if(n==0){
        printf("sum of number from 1 to n : %d",s); //code
        return;
    } 
    sum(n-1,s+n); return; //recursive call
    return;
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
    
*/

// Functional Recursion (Non-Parameterized)

int sum(int n){
    if(n==0) return 0;
    int s=n+sum(n-1);
    return s;
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s);
    return 0;
}