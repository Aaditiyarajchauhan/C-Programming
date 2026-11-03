#include<stdio.h>
int main(){
    
    char s1[]="Hello my computer.";
    char s2[]="Hello my computer.";

    //Deep copy
    printf("----Deep copy----\n");
    int size=0;
    int i=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    char s3[size];
    for(int j=0;j<size;j++){
        s3[j]=s1[j];
    }
    s1[0]='M';
    printf("%s\n",s3);
    printf("%s\n",s1);

    //Shallow copy
    printf("----Shallow copy----\n");
    char *s4=s2;
    s2[0]='M';
    printf("%s\n",s2);
    printf("%s\n",s4);

    return 0;
}