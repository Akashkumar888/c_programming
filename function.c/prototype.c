#include<stdio.h>
//void fun(); function prototype use order function kahi pr ho main ke niche or upper
int main(){
   void fun(); // main ke andar function prototype
    fun();
    return 0;
}
void fun(){
    printf("Hello world");
}