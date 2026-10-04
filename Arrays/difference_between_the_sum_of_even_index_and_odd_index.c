#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array : ");
    int sum_even=0,sum_odd=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
    }
    int difference=sum_even-sum_odd;
    if(difference<0) difference*=-1;
    printf("the difference between the sum of elements at even indices to the sum of element at odd indices: %d ",difference);
    return 0;
}