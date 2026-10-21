#include<stdio.h>
//array use pass by reference (or pointer)
void swap(int a[]){
    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;
    return;
}
int main(){
    int arr[2]={1,2};
    printf("%d %d\n",arr[0],arr[1]);
    swap(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}