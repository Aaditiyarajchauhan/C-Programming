#include<stdio.h>
int main(){
    //i=i+1 is i++ only for this
    //i=i+2 is not any abbreviation
    for(int i=1;i<=10;i=i+2){
        printf("Hi\n");
    }
    return 0;
}