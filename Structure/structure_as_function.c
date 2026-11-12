#include<stdio.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

void fun(pokemon p){
    printf("Health: %d\n",p.hp);
    return;
}

void change(pokemon p){
    p.speed=110;
    p.attack=60;
    p.hp=70;
    return;
}

int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=50;
    pikachu.speed=100;
    change(pikachu);
    fun(pikachu);
    printf("Attack: %d\n",pikachu.attack);
    printf("Speed: %d\n",pikachu.speed);
    printf("Health: %d\n",pikachu.hp);
    return 0;
}