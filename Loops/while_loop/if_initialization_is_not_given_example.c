#include<stdio.h>
int main(){
    int j;
    printf("%d",j);//Garbage value means any random value
    while (j<=10){
        printf("\n%d",j);
        j=j+1;
    }
    return 0;
}