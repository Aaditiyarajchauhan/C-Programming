#include <stdio.h>
int main(){
    int a[5];
    //taking input in array
    printf("-----taking input in array-----\n");
    for(int i=0;i<5;i++){
        printf("Enter the %dth element:",i+1);
        scanf("%d",&a[i]);
    }
    printf("-----Access element from array-----\n"); 
    printf("Array : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}