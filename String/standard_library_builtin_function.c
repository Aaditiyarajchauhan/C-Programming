#include<stdio.h>
#include<string.h>
int main(){
    
    printf("----strlen----\n");//length
    char* str1="Aaditiyaraj";
    int x=strlen(str1);
    printf("the string length or size is : %d\n",x);

    printf("----strcpy----\n");//copy
    char str2[]="Aaditiyaraj";
    int size = strlen(str2);
    char str3[size];
    strcpy(str3,str2);
    str2[1]='A';
    printf("string str3: %s\n",str3);
    printf("string str2: %s\n",str2);

    printf("----strcat----\n");//concatinate (join)
    char str4[]="Aaditiya";
    char str5[]="raj";
    strcat(str4,str5);
    printf("string str4 and str5: %s\n",str4);

    return 0;
}