#include<stdio.h>
int main(){
    int n;
    printf("Enter number of student: ");
    scanf("%d",&n);
    int marks[n];
    printf("----Enter the marks of %d student:----\n",n);
    for(int i=0;i<n;i++){
        printf("Enter the marks of roll no %d student: ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("These student has less than 36 marks\n");
    for(int i=0;i<n;i++){
        if(marks[i]<35)
            printf("Roll No: %d\n",i+1);
    }
    return 0;
}