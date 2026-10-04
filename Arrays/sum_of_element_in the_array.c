#include<stdio.h>
int main(){
    int n;
    printf("Size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of all element in array : %d",sum);
    return 0;
}