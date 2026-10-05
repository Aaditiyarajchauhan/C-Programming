#include<stdio.h>
void reverse(int a[],int si,int ei){
    while(si<ei){
        int temp=a[si];
        a[si]=a[ei];
        a[ei]=temp;
        si++;
        ei--;
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f,l,si,ei;
    printf("Enter the first element to the last element :");
    scanf("%d %d",&f,&l);
    for(int i=0;i<n;i++){
        if(a[i]==f) si=i;
        if(a[i]==l) ei=i;
    }
    reverse(a,si,ei);
    // for(int i=si,j=ei;i<j;i++,j--){
    //     int temp=a[i];
    //     a[i]=a[j];  
    //     a[j]=temp;
    // }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   return 0;
}