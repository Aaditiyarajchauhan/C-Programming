#include<stdio.h>
//#include<limits.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    // int i=0;
    // int j=n-1;
    // while(i<j){
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i++;
    //     j--;
    // }
    return;
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   return 0;
}