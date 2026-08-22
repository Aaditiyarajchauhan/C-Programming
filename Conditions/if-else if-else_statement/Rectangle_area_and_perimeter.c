#include<stdio.h>
int main(){
    float l,b;
    float area,perimeter;
    printf("Enter the length and breadth: ");
    scanf("%f %f",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    if (area>perimeter){
        printf("area is greater than perineter\nperimeter=%0.2f\narea=%0.2f",perimeter,area);
    }
    else if (area<perimeter){
        printf("perimeter is greater than area\nperimeter=%0.2f\narea=%0.2f",perimeter,area);
    }
    else{
        printf("perimeter is equal to area\nperimeter=%0.2f\narea=%0.2f",perimeter,area);
    }
    return 0;
}