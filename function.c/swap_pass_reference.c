#include<stdio.h>
void swap(int *x,int *y){
int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("Enter the number a :");
    scanf("%d",&a);
    printf("Enter the number b :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a :%d\n",a);
    printf("The value of b :%d\n",b);
    return 0;
}