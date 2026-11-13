#include<stdio.h>
typedef struct person{
    int age;
    float weight;
}person;

void access(person *a,int n){
    for(int i=0;i<n;i++){
        printf("----person %d----\n",i+1);
        //why a+i ? 
        //because *a hold address of a[0] so we need to increment by 1 so a+i
        printf("Age : %d\n",(a+i)->age);
        printf("Weight : %0.2f\n\n",(a+i)->weight);
    }
    return;
}

int main(){
    int n;
    printf("Enter the number of person : ");
    scanf("%d",&n);
    person a[n];
    for(int i=0;i<n;i++){
        printf("----Person %d----\n",i+1);
        printf("Enter the weight : ");
        scanf("%f",&a[i].weight);
        printf("Enter the age : " );
        scanf("%d",&a[i].age);
        printf("\n");
    }
    access(a,n);
    return 0;
}