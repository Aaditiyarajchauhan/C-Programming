#include<stdio.h>
/*
1) Compiler always run first main()
2) Inside small bracket we defined parameters/arguments
3) Why use int in starting of function ? it defined the return data type or return type of the function
4) add is the name of the function
5) return : a) send the value back to the code 
            b) stop the execution of function or end the function
6) function declare before main otherwise error to resolve it we need prototype
*/
int add(int a,int b){
    return a+b;
    /*
    int c=a+b;
    printf("%d",c);
    return;
    */
}
int main(){
    int a,b;
    printf("Enter the number a and b : ");
    scanf("%d %d",&a,&b);
    int sum=add(a,b);//calling function
    printf("%d",sum);
    //sum(a,b);
    return 0;
}