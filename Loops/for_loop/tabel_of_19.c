#include<stdio.h>
int main(){
    /*
    for(int i=1;i<11;i++){
        printf("19 X %d = %d\n",i,i*19);
    }
    */
    for(int i=19;i<=190;i=i+19){
        printf("19 X %d = %d\n",i/19,i);
    }
    return 0;
}