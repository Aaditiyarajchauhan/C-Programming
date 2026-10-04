#include<stdio.h>
int main(){
    int n;
    printf("Size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    int product=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        product=product*a[i];
    }
    printf("Sum of all element in array : %d",product);
    return 0;
}