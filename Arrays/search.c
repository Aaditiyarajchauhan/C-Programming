#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,s;
    int idx=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter search element:");
    scanf("%d",&s);
    bool flag = false;
    //int check=0;
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==s){
            flag = true;
            idx=i;
            //check=i;
            break;
        }   
    }
    // if(check!=0){
    //     printf("%d is present in the array and its index is %d",s,check);     
    // }
    if(flag==true){
        printf("%d is present in the array and its index is %d",s,idx);     
    }
    else{
        printf("%d is not present in the array",s);
    }
    return 0;
}