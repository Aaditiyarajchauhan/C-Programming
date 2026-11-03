#include<stdio.h>
int main(){

    // initilized string method 1
    char arr1[]={'H','e','l','l','o','\0'};

    // initilized string method 2
    char arr2[]={"Hello\0"};

    // initilized string method 3
    char arr3[]={"Mello"}; //it is also correct because this initilization automatically add "\0" character in the end.

    // Size of string
    printf("-----Size of string is : ");
    printf("%d",sizeof(arr3)); //why 6; because this initializatation add "/0" character 
    printf(" -----");
    printf("\n");
    /*
    ERROR
    char str[5]="Hello"; // if not give error so always initilized size with pluse 1
    printf("%d",sizeof(str));
    */

    //Traverse the string
    printf("-----Traverse an string-----\n");
    for(int i=0;i<5;i++){// need to know termination condition 
        printf("%c",arr1[i]);
    }
    printf("\n");
    
    int i=0;
    while(arr2[i]!='\0'){// didn't need to know termination condition
        printf("%c",arr2[i]);
        i++;
    }
    printf("\n");

    printf("%s\n",arr3);

    // Update element of string
    printf("-----Update String-----\n");
    arr3[0]='H';
    int j=0;
    while(arr3[j]!='\0'){
        printf("%c",j[arr2]); //printf("%c",arr3[i]); printf("%c",*(i+str)); printf("%c",*(str+i));
        j++; 
    }

    return 0;
}