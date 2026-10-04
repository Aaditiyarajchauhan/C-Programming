#include<stdio.h>
//#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
   return 0;
}