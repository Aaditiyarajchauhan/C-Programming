#include<stdio.h>
int main(){
    
    // initilized array method 1
    int a1[2][2];
    a1[0][0]=1;
    a1[0][1]=2;
    a1[1][0]=3;
    a1[1][1]=4;

    //initilized array method 2
    int a2[2][2]={{1,2},{3,4}};

    //initilized array method 3
    int a3[2][2]={1,2,3,4};

    //initilized array method 4
    int a[][2]={1,2,3,4}; //{{1,2},{1,2}}
    //Access element 
    printf("-----Access element in array-----\n");
    printf("%d\n",a2[1][1]);

    //traversal
    printf("-----Traverse an array a1-----\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    return 0;
}