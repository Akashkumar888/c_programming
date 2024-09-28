#include<stdio.h>
int main(){
    char ch[] = {'H','E','L','L','O','\0'};
        int i=0;
    while(ch[i]!='\0'){
        printf(" %c ",ch[i]);
        i++;
    }
    return 0;
}