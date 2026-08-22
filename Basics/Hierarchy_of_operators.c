#include<stdio.h>
int main(){
    int n=2*3/4+4/4+8-2+5/8;
    printf("%d\n",n);
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;
    b=j/i*i;
    printf("%d %d %f %f",k,l,a,b);
    return 0;
}

/*
hierarch_order_in_C_language

RULE 1:
1.(),[],.,->,++,--
2.!,~,&
3.*,/,%
4.+,-
5.<<,>>
6.<,<=,>,>=
7.==,!=
8.Bitwise(&)
9.Bitwise(^)
10.Bitwise(|)
11.Logical(&&)
12.Logical(||)
13.?:
14.=,+=,-=,*=,/=,%=,&=,^=,|=,<<=,>>=
15.,

RULE 2:left to right solve it.
switch to rule 2 when if operator is same or on same hierarch.

*/