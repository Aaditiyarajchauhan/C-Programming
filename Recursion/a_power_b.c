#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int p=a*power(a,b-1);
    return p;
}
int main(){
    int a,b;
    printf("Enter the a and b : ");
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("The a raised to the power b is : %d",p);
    return 0;
}