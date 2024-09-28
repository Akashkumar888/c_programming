#include<stdio.h>
void swap(int x,int y){
int temp;
    temp=x;
    x=y;
    y=temp;
    printf("The value of a :%d\n",x);
    printf("The value of b :%d\n",y);
}
int main(){
    int a,b;
    printf("Enter the number a :");
    scanf("%d",&a);
    printf("Enter the number b :");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}