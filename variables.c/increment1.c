#include<stdio.h>
int main(){
    int a,x;
    scanf("%d",&x);
    a= ++x + x++ + ++x;
    printf("%d",a);
    return 0;
}