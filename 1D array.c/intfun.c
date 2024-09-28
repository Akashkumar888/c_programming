#include<stdio.h>
void fun(int a){
    a=7;
    return ;
}
int main(){
   int a=4;
   printf("%d\n",a);
   fun(a);
   printf("%d",a);
    return 0;
}