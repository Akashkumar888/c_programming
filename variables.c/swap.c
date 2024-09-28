#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number a: ");
    scanf("%d",&a);
    printf("Enter the number b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    // int temp=a;
    // a=b;
    // b=temp;
    printf("a= %d\nb= %d",a,b);
    return 0;
}