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
        for(int j=0;j<i;j++){ //for(int j=i+1;j<n;j++)
            for(int k=0;k<j;k++){ //for(int k=j+1;k<n;k++)
                if(arr[i]+arr[j]+arr[k]==x) { 
                    printf("(%d %d %d) ",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\nTotal number of triplet : %d ",count);    
    return 0;
}