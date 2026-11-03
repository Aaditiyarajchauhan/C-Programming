#include<stdio.h>
int main(){

    // initialization as pointer method 1
    char str[]="Hello buddy.";
    char* ptr1=str;
    int i=0;
    while(*ptr1!='\0'){
        printf("%c",*ptr1);
        ptr1++;
        i++;
    }
    printf("\n");
    str[0]='M';// when you use method 1 initilization then we can MODIFY individual character but not the entire string
    printf("After change : ");
    printf("%s\n",str);

    // initialization as pointer method 2
    char* ptr2="hi-fi my computer.";
    printf("%s\n",ptr2);
    ptr2="Hello buddy.";//  when you use method 2 initilization then we can MODIFY entire string but not the individual character
    printf("After change : ");
    printf("%s",ptr2);
    return 0;
}