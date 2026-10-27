#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        int defense;
        char type[20];
    }dragonite,lugia,mewtwo;

    dragonite.attack=134;
    dragonite.hp=91;
    dragonite.speed=80;
    dragonite.defense=95;
    strcpy(dragonite.type,"Dragon,Flying");

    lugia.attack=90;
    lugia.hp=106;
    lugia.speed=110;
    lugia.defense=130;
    strcpy(lugia.type,"Psychic,Flying");

    mewtwo.attack=110;
    mewtwo.hp=106;
    mewtwo.speed=130;
    mewtwo.defense=90;
    strcpy(mewtwo.type,"Psychic,Flying");
    
    printf("%s",dragonite.type);
    return 0;
}