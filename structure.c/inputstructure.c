#include<stdio.h>
int main(){
    struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    }pikachu,charizard;
   // struct pokemon pikachu;
    printf("Enter the pikachu.hp : ");
    scanf("%d",&pikachu.hp);
    printf("Enter the pikachu.speed : ");
    scanf("%d",&pikachu.speed);
    printf("Enter the pikachu.attack :");
    scanf("%d",&pikachu.attack);
    
    
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);

    //struct pokemon charizard;
    printf("Enter the charizard.hp : ");
    scanf("%d",&charizard.hp);
    printf("Enter the charizard.speed : ");
    scanf("%d",&charizard.speed);
    printf("Enter the charizard.attack : ");
    scanf("%d",&charizard.attack);
    
    printf("%d\n",charizard.hp);
    printf("%d\n",charizard.speed);
    printf("%d\n",charizard.attack);
    
    return 0;
}