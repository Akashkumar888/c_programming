#include<stdio.h>
int main(){
    int a,x=10;
    // int c=++x;
    // printf("%d\n",c);
    // int d=x++;
    // printf("%d\n",d);
    // int f=++x;
    // printf("%d\n",f);
    a= ++x + x++ + ++x;
    printf("%d",a);
    return 0;
}