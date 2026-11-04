#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Enter the string : ");
    gets(str);

    int x;
    printf("Enter the specific index:");
    scanf("%d",&x);

    int size=strlen(str);

    char ich;//inserted character at position x
    printf("Enter the character want to insert: ");
    scanf(" %c",&ich);

    for(int j=size;j>=x;j--){
        str[j+1]=str[j];
    }

    str[x]=ich;
    
    printf("Your string is after inserting character is : %s\n",str);

    return 0;
}