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

   pokemon pikachu={45,90,78,'A',"pikachu"};
//    pikachu.hp=45;
//    pikachu.speed=90;
//    pikachu.attack=78;
//    pikachu.tier='A';
//    strcpy(pikachu.name,"pikachu");
   printf("%d\n",pikachu.hp);
   printf("%d\n",pikachu.speed);
   printf("%d\n",pikachu.attack);
   printf("%c\n",pikachu.tier);
   printf("%s\n",pikachu.name);
   printf("\n");
   pokemon* x=&pikachu;
   (*x).hp=70;
   (*x).speed=80;
   (*x).attack=50;
   (*x).tier='S';
   strcpy((*x).name,"mewtwo");
   printf("%d\n",pikachu.hp);
   printf("%d\n",pikachu.speed);
   printf("%d\n",pikachu.attack);
   printf("%c\n",pikachu.tier);
   printf("%s\n",pikachu.name);
    return 0;
    }