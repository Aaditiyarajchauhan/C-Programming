#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;//base condition
    int power=powerlog(a,b/2);//recursive call
    if(b%2==0) return power*power;//code 
    else return power*power*a;//code
}
void toh(int n,char s,char h,char d){
    if(n==0) return; //base condition when number of disks zero
    toh(n-1,s,d,h); //recursive call one disk you move so n-1.we move top(n-1) disk or (n-1)pyramid source to helper 
    printf("%c -> %c\n",s,d); //largest disk move to source to destinaation
    toh(n-1,h,s,d);  //recursive call we move top(n-1) or (n-1)pyramid disk helper to destination 
    return;
}
int main(){
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    printf("Minimum number of moves is : %d\n",powerlog(2,n)-1);
    toh(n,'A','B','C');
    return 0;
}