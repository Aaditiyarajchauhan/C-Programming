#include<stdio.h>
int main(){
    int x=4,y,z;
    y=--x; //x=x-1 then y=x first decrement then use
    z=x--; //x=x-1 then z=x use first then decrement
    printf("%d %d %d",x,y,z);
    return 0;
}
/*
x--  =  x=x-1(post decrement)  = it means use x, then decrement
--x  =  x=x-1(pre decrement)   = it means decrement x, then use
x++  =  x=x+1(post increment)  = it means use x, then increment
++x  =  x=x+1(pre increment)   = it means increment x, then use
*/