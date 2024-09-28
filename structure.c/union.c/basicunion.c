#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef union pokemon{ 
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
   pikachu.tier='A'; // last vala shi aata hai
  // strcpy(pikachu.name,"pikachu");
   printf("%d\n",pikachu.hp);
   printf("%d\n",pikachu.speed);
   printf("%d\n",pikachu.attack);
   printf("%c\n",pikachu.tier);
 //  printf("%s\n",pikachu.name);
    return 0;
    }