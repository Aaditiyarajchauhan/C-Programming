#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int smax=INT_MIN;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max; 
            max=arr[i]; 
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    /*
    max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    sle=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=max && sle<arr[i]) sle=arr[i];
    }
    */
    printf("The second largest element in array: %d",smax);
    return 0;
}