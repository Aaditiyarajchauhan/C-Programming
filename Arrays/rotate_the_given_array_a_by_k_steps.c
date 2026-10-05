#include<stdio.h>
void reverse(int a[],int fi,int li){
    while(fi<li){
        int temp=a[li];
        a[li]=a[fi];
        a[fi]=temp;
        fi++;
        li--;
    }
    return;
}
int main(){
    int n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    int arr[n];
    printf("Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(k>n) k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}