#include<stdio.h>
void palindrome(int arr[],int n){
    int a=0;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            a=1;
            break;
        }
        i++;
        j--;
    }
    if(a==1) printf("Not palindrome");
    else printf("palindrome");
    return;
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    palindrome(arr,n);
    return 0;
}