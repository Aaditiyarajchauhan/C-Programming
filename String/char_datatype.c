#include<stdio.h>
int main(){

    char a[5]={'a','t','l','a','s'}; 
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);
    // it arr is continous memory allocation and char datatype take 1 bytes 

    // ASCII value
    char character ='A';
    int x=(int)character; //type casting and then it stored ASCII value 
    printf("%d\n",x);
    char number = '0';
    printf("%d\n",number);

    /* 
    INVALID
    char ch='ab';
    printf("%c",ch);
    */
    
    // VALID 
    // this is only one which was valid it consists two character but treat only as a one character 
    char ch='\0'; // null character 
    printf("%c",ch); // it print nothing 
    printf("%d",ch); // ASCII value = 0

    return 0;
}