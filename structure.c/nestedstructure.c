#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{ 
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legndarypokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=10;
    mewtwo.normal.speed=89;
    mewtwo.normal.attack=90;
    mewtwo.normal.tier='A';
    strcpy(mewtwo.normal.name,"Mewtwo");
    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.normal.hp);
    printf("%d\n",mewtwo.normal.speed);
    printf("%d\n",mewtwo.normal.attack);
    printf("%c\n",mewtwo.normal.tier);
    return 0;
}