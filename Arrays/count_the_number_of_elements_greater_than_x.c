#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    int arr[n];
    printf("Array : ");
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>x) count++;
    }
    printf("%d number of element in given array greater than a %d",count,x);
    return 0;
}