#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    printf("%p\n",x);
    printf("%p\n",&x); 
   printf("%d\n",*x);
    *x=7;
   printf("%d\n",a);
    return 0;
}