#include<stdio.h>
#include<unistd.h>
int main(){
    if(fork() && fork())
    fork();
    printf("HELLO");
    return 0;
}