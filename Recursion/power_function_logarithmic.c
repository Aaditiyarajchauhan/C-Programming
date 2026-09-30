#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;//base condition
    int power=powerlog(a,b/2);//recursive call
    if(b%2==0) return power*power;//code 
    else return power*power*a;//code
}
int main(){
    int a,b;
    printf("Enter the a and b : ");
    scanf("%d %d",&a,&b);
    int p=powerlog(a,b);
    printf("The a raised to the power b is : %d",p);
    return 0;
}  