#include<stdio.h>
int main(){
    float num;
    printf("Enter real number :");
    scanf("%f",&num);
    int temp; //int temp=num or int/float temp=(int)num
    float fractional;
    temp=num;
    fractional = num-temp;
    printf("fractional part of number is %f",fractional);
    return 0;
}