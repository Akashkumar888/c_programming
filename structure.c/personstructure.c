#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct person{
    int age;
    float weight;
}person;
void change(person *p){
  (*p).age=40; // p->.hp=40;
  (*p).weight=79;
  return ;
}
int main(){
person a;
a.age=25;
a.weight=75;

printf("%d\n",a.age);
printf("%f\n",a.weight);
change(&a);
printf("%d\n",a.age);
printf("%f\n",a.weight);
    return 0;
}