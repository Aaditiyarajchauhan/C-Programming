#include<stdio.h>
int main(){
    char str[40];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    //size
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    //reverse
    printf("Reversed String : ");
    for(int i=0,j=size-1;i<=j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}