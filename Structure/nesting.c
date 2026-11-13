#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[50];
    }legend;
    typedef struct godpokemon{
        legend legendary;
        int specialattack;
    }god;

    god arceus;
    arceus.specialattack=300;
    strcpy(arceus.legendary.ability,"Turn Anyone to stone");
    arceus.legendary.normal.attack=500;

    legend mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    mewtwo.normal.speed=180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.tier='S';
    

    return 0;
}