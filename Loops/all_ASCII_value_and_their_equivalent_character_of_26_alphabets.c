#include<stdio.h>
int main(){
    int i=65;
    while(i<91){
        char ch=(char)i;//typecasting
        printf("%c-->%d\n",ch,i);
        i++;
    }
    return 0;
}