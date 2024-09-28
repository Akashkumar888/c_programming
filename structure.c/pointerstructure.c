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
    int main(){
   pokemon pikachu;
   pikachu.hp=45;
   pikachu.speed=90;
   pikachu.attack=78;
   pikachu.tier='A';
   strcpy(pikachu.name,"pikachu");
   pokemon* x=&pikachu;
   printf("%p\n",&pikachu.hp);
   printf("%p\n",&pikachu.speed);
   printf("%p\n",&pikachu.attack);
   printf("%p\n",&pikachu.tier);
   printf("%p\n",&pikachu.name);
   printf("%p\n",x);
    return 0;
    }
