#include<stdio.h>
//#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];//min=INT_MAX; in this min store the very largest number 
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Minimun value out of all the element in the array : %d",min);
    return 0;
}