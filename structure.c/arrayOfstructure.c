#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[3];
    arr[0].hp=60;
    arr[0].speed=90;
    arr[0].attack=87;
    arr[0].tier='A';
    strcpy(arr[0].name,"charizard");
    arr[1].hp=70;
    arr[1].speed=70;
    arr[1].attack=77;
    arr[1].tier='S';
    strcpy(arr[1].name,"pikachu");
    arr[2].hp=80;
    arr[2].speed=80;
    arr[2].attack=87;
    arr[2].tier='C';
    strcpy(arr[2].name,"mewtwo");
for(int i=0;i<3;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].hp);
    printf("%d\n",arr[i].speed);
    printf("%d\n",arr[i].attack);
    printf("%c\n",arr[i].tier);
    printf("\n");
}
    return 0;
}