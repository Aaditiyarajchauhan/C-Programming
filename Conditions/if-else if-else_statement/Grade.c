#include<stdio.h>
int main(){
    float percentage;
    printf("Enter the number: ");
    scanf("%f",&percentage);
    if(percentage>90 && percentage<=100)
            printf("Excellent");
    else if(percentage>80 && percentage<=90)
            printf("Very Good");
    else if(percentage>70 && percentage<=80)
            printf("Good");
    else if(percentage>60 && percentage<=70)
            printf("Can do better");
    else if(percentage>50 && percentage<=60)
            printf("Average");
    else if(percentage>40 && percentage<=50)
            printf("Below Average");
    else if(percentage<=40)
            printf("fail");
    else{
        printf("invalid");
    }
    return 0;
}