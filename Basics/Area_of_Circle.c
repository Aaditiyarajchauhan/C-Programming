#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    float pi=3.1415;
    float area;
    area=pi*r*r;
    printf("Area of circle : %0.2f",area);
    return 0;
}