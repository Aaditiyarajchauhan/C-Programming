#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("These are all element are duplicate: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}