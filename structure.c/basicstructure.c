#include<stdio.h>
int main(){
    struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.attack=60;
    pikachu.tier='A';
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    struct pokemon charizard;
    charizard.hp=70;
    charizard.speed=120;
    charizard.attack=80;
    charizard.tier='S';
    printf("%d\n",charizard.hp);
    printf("%d\n",charizard.speed);
    printf("%d\n",charizard.attack);
    printf("%c\n",charizard.tier);
    return 0;
}