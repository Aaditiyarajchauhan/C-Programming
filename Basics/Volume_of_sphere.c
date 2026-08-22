#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    float pi=3.1415;
    float vol;
    vol=4*pi*r*r*r/3;
    printf("Volume of sphere: %0.2f",vol);
    return 0;
}