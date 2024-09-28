#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct pokemon{ 
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    void fun(pokemon p){
        printf("%d\n",p.hp);
        return ;
    }
    void change(pokemon p){
        p.hp=59;
        p.attack=469;
        p.speed=419;
        return ;
    }
int main(){
    pokemon pikachu;
    pikachu.hp=49;
    pikachu.attack=459;
    pikachu.speed=409;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    //fun(pikachu);
    return 0;
}