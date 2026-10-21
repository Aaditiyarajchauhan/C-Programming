#include<stdio.h>
int main(){
    int n,x;
    int count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    int arr[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){//for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x) { 
                printf("(%d %d) ",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("\nTotal number of pairs : %d ",count);    
    return 0;
}