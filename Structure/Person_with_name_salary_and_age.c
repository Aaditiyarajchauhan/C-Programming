#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Person{
        char name[20];
        float salary;
        int age;
    } psn;
    
    psn person1;
    psn person2;

    strcpy(person1.name,"Abcd");
    person1.salary= 50000.34;
    person1.age=21;

    strcpy(person2.name,"wxyz");
    person2.salary= 56000.33;
    person2.age=22;

    printf("Name of person 1 : %s\n",person1.name);
    printf("Age of person 2 : %d\n",person2.age);

    return 0;
}