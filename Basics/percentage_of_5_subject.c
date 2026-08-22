#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter marks of subject 1:");
    scanf("%d",&a);
    printf("Enter marks of subject 2:");
    scanf("%d",&b);
    printf("Enter marks of subject 3:");
    scanf("%d",&c);
    printf("Enter marks of subject 4:");
    scanf("%d",&d);
    printf("Enter marks of subject 5:");
    scanf("%d",&e);
    int total=a+b+c+d+e;
    int max_marks;
    printf("Enter maximum marks:");
    scanf("%d",&max_marks);
    float percentage=(float)total/max_marks*100;//if we not use (float) then both int/int=0 and 0*100=0 not calculate any percentage ,so use this method that I implement in it and another is make any(max_marks,total) of one in float 
    printf("Percentage of 5 subjects: %0.2f",percentage);
    return 0;
}