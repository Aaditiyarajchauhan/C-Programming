#include<stdio.h>
int main()
{
    int x;
    x=7;
    printf("%d",x);
    x=x+5;
    printf("\n");
    printf("%d\n",x);
    printf("%d\n",x-1);
    x+=1;
    printf("%d\n",x);

    int a=5,b=7;
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b); //int divided by int then it give integer value

    float y=5;
    int z=7;
    printf("%f\n",y/z);//float divided by float ,int divided by float and float divided by int ,then it give you decimal integer

    int u=5;
    float v=7;
    printf("%f\n",u/v);
    printf("%0.2f",u/v);
    return 0;
}