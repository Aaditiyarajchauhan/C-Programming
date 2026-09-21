#include<stdio.h>
#include<math.h>
int main(){
    int a,n,p;
    printf("Enter the number a to find square root: ");
    scanf("%d",&a);
    printf("The square root of the number is : %.2f\n",sqrt(a));
    printf("Enter the number and power : ");
    scanf("%d %d",&n,&p);
    int q=pow(n,p);
    printf("The power of the number is : %d",q);
    return 0;
}   