#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

void change(pokemon* p){
    p->hp=70;
    p->attack=80;
    p->speed=110;
    p->tier='S';
    strcpy(p->name,"Raichu");
    /*
    (*p).hp= 70;
    (*p).attack= 80;
    (*p).speed= 110;
    (*p).tier= 'S';
    strcpy((*p).name,"Raichu");
    */
    return;
}

//By default structure in c use pass by value but using pointer it use pass by reference 
int main(){

    //method 1 to initilized
    /*
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    */

    //method 2 to initilized 
    pokemon pikachu={60,70,100,'A',"Pikachu"}; //orderwise and position is safely initilized

    //Before updation
    printf("-----Before updation-----\n");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    //pass by reference
    change(&pikachu);

    //After updation
    printf("-----After updation-----\n");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    //Address
    printf("-----Memory location------\n");
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);

    return 0;
}