#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int a=sizeof(bool);
    printf("%d\n",a);
    int*ptr=(int*)malloc(10*4);
    printf("%d\n",*ptr);
    return 0;
}