#include<stdio.h>
typedef struct student{
    int roll_no;
    char name[40];
    char department[20];
    char course[20];
    int yoj;//year of joining
} student;

void check(student s1,student s2){
    int i=0;
    int isSame=1;
    while(s1.department[i]!='\0' || s2.department[i]!='\0'){
        if (s1.department[i]!=s2.department[i]){
            isSame=0;
            break;
        }
        i++;
    }
    if(isSame==1){
        printf("both student have same department");
    }
    else {
        printf("both have different department");
    }
    return;
}

int main(){
    student s1,s2;

    printf("----STUDENT 1----\n");
    printf("Enter the roll number : ");
    scanf("%d",&s1.roll_no);
    printf("Enter student name : ");
    scanf(" %[^\n]",s1.name);
    printf("Enter department : ");
    scanf(" %[^\n]",s1.department);
    printf("Enter course : ");
    scanf(" %[^\n]",s1.course);
    printf("Enter year of joining : ");
    scanf("%d",&s1.yoj);
    printf("\n");

    printf("----STUDENT 2----\n");
    printf("Enter the roll number : ");
    scanf("%d",&s2.roll_no);
    printf("Enter student name : ");
    scanf(" %[^\n]",s2.name);
    printf("Enter department : ");
    scanf(" %[^\n]",s2.department);
    printf("Enter course : ");
    scanf(" %[^\n]",s2.course);
    printf("Enter year of joining : ");
    scanf("%d",&s2.yoj);

    check(s1,s2);
    return 0;
}