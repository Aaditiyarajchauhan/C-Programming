#include<stdio.h>
int main(){
    
    // initilized array method 1
    int a1[5]={2,3,5,7,5};

    //initilized array method 2
    int a2[5];
    a2[0]=1;
    a2[1]=2;
    a2[2]=5;
    a2[3]=1;
    a2[4]=8;
    
    //Access element 
    printf("-----Access element in array-----\n");
    printf("%d\n",a2[2]);

    //Different Data type array
    printf("-----Different Data type array-----\n");
    float a[3]={1.2,4,4};
    printf("%f\n",a[0]);
    char c[4]={'A','B','C','%'};
    printf("%c\n",c[0]);

    //Error 
    //printf("%d"\n,arr[10]); give error because exceed array size and there is no 10th index
    
    //Update
    printf("-----Update element in array-----\n");
    printf("%d\n",a1[4]);//value before update
    a1[4]=1;//{2,3,5,7,1} "UPDATE"
    printf("%d\n",a1[0]);//get value by index of arr
    printf("%d\n",a1[4]);//value after update

    //traversal
    printf("-----Traverse an array a1-----\n");
    for(int i=0;i<5;i++){
        printf("%d\n",a1[i]);
    }
    return 0;
}