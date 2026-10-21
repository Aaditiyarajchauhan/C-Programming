#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}