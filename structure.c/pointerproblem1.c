#include<stdio.h>
typedef int* pointer;
int main(){
    int x=5,y=10;
    pointer a=&x,b=&y;
    printf("%p\n",&a);
    printf("%p",&b);
    return 0;
}