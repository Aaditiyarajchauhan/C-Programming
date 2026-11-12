#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } pokemon;

    pokemon a,b,c;;
    a.attack=100;
    a.hp=100;
    a.speed=90;
    a.tier='A';
    strcpy(a.name,"Blastoise");

    b=a; //deep copy
    b.attack=75;
    strcpy(b.name,"Venusaur");
    printf("%s attack : %d\n",a.name,a.attack);
    printf("%s attack : %d\n",b.name,b.attack);

    return 0;

}