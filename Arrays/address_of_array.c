#include<stdio.h>
int main(){
    int a[5]={1,1,4,3,4};
    for(int i=0;i<5;i++){
        int *address=&a[i];
        printf("Address of element%d : ",i+1); //all element stored in continous memory allocation
        printf("%d\n",address);
    }
    return 0;
}