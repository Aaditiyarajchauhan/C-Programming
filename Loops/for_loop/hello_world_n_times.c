#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to print n times : ");
    scanf("%d",&n);

    //printf("-----SCOPE OF VARIABLE-----\n");

    /*
    printf("Before i declared in main block");
    for(int i=0;i<n;i=i+1){  
        printf("hello world\n");
    }
    printf("%d",&i);//show error not declared i variable because it declared only in the scope of for loop
    */    

    printf("After i declared in main block\n");
    int i;
    for(i=0;i<n;i=i+1){  
        printf("hello world\n");
    }
    printf("%d",i);    

    return 0;
}