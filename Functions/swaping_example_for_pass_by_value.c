#include<stdio.h>
           //int a, int b are the formal parameter 
              //↑
              //↑
              //↑
void swap(int a, int b){  // the variable a and b inside this function  are local parameter.they exist only within the scope of this this function block.
    int temp=a;
    a=b;
    b=temp;
    printf("That Swaping under the scope of swap function:");
    //That Swaping works only under the scope variable int a , int b in the swap function
    printf("  a=%d  b=%d\n",a,b); // this output is for swap function not for main function.
                                  // by default c use call-by-value so these change not show in the main function.
                                  // resolve by call-by-reference
    return;
}
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("\nBefore swapping:");
    printf("  a=%d  b=%d\n",a,b);
    swap(a,b);  //let ,swap(2,3)
        //↓
        //↓
        // here the value store in a and b are the actual parameter or arguments
    printf("After swapping");
    printf("  a=%d  b=%d\n",a,b);
}
