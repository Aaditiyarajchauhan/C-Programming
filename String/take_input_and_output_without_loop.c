#include<stdio.h>
int main(){
    char str[40];//we need to declare the size if we not initilized the string at the same time 
    printf("Enter the string : ");
    //INPUT THE STRING
    //scanf("%[^\n]s",str); 
    gets(str);
    //OUTPUT
    puts("Your string is : ");
    puts(str);
    return 0;
}