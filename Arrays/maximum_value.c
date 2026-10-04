#include<stdio.h>
//#include<limits.h>
int main(){
    int n,max;
    printf("Size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0]; //max=INT_MIN; in this store max it store the very smallest number 
    for(int i=1;i<n;i++){ //for(int i=0;i<n;i++)
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Maximun values of all the element in the array : %d",max);
    return 0;
}