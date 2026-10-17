#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    int arr[n][4];
    for(int i=0;i<n;i++){
        printf("Enter roll no and marks of student in phy chem math: ");
        scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
    }
    printf("roll phy chem math\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            printf(" %d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}