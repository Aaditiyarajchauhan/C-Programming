#include<stdio.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    
    date date1;
    printf("Enter the date 1 : " );
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);

    date date2;
    printf("Enter the date 2 : " );
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

    if(date1.year == date2.year && date1.month == date2.month && date1.day == date2.day){
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
    return 0;
}