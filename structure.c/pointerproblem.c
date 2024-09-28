#include<stdio.h>
int main(){
    int x=5,y=10;
    int *a=&x;
    int *b=&y;
    printf("%p\n",&a);
    printf("%p",&b);
    return 0;
}