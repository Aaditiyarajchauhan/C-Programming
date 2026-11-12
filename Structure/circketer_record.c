#include<stdio.h>
int main(){
    struct cricket {
        char name[40];
        int age;
        int no_of_test_match;
        float average_run;
    } ;

    int n;
    printf("Enter how many circketer record want to store: ");
    scanf("%d",&n);

    struct cricket arr[n];
    
    for(int i=0;i<n;i++){
        printf("----Cricketer %d ----\n",i+1);
        printf("Enter the name :");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter the age :");
        scanf("%d",&arr[i].age);
        printf("Enter the number of test match :");
        scanf("%d",&arr[i].no_of_test_match);
        printf("Enter the average run :");
        scanf("%f",&arr[i].average_run);
        printf("\n");
    }
    
    for(int i=0;i<n;i++){
        printf("----Cricketer %d ----\n",i+1);
        printf("Name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Number of test match : %d\n",arr[i].no_of_test_match);
        printf("Average run : %f\n\n",arr[i].average_run);
    }

    return 0;
}