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
        printf("%d\n",p.attack);
        printf("%d\n",p.speed);
        printf("%c\n",p.tier);
        printf("%s\n",p.name);
        return ;
    }
int main(){
    pokemon pikachu;
    pikachu.hp=679;
    pikachu.attack=59;
    pikachu.speed=97;
    pikachu.tier='S';
    strcpy(pikachu.name,"Akash");
    fun(pikachu);
    return 0;
}