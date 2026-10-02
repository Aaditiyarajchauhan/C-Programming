#include<stdio.h>

/* parameterized way

void increase(int x,int n){    
    if(x>n) return; //base case
    printf("%d\n",x); //code
    increase(x+1,n); //recursive call
    return ;
}
int main(){
    int n,x;
    printf("Enter the n: ");
    scanf("%d",&n);
    increase(1,n);
    return 0;
}
*/

// Functional Recursion (Non-Parameterized)

void increase(int n){
    if(n==0) return; //base case
    increase(n-1); //recursive call
    printf("%d\n",n); //code
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    increase(n);
    return 0;
}