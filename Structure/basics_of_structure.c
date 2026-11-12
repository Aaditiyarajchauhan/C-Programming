#include<stdio.h>
int main(){
    // user defined datatype
    struct pokemon{
        // these are the attribute 
        int hp;
        int speed;
        int attack;   
        char tier;
    } mewtwo , charizard ; //declaration method 1
    
    // declaration method 2
    struct pokemon pikachu;
    // input
    printf("Enter the attack of pikach : ");
    scanf("%d",&pikachu.attack);
    // initialization
    pikachu.hp=50;
    pikachu.speed=120;
    pikachu.tier='A';
    // accessing
    printf("%d\n",pikachu.attack);

    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=100;
    charizard.tier='S';

    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.speed=200;
    mewtwo.tier='G';

    return 0;
}