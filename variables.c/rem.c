#include<stdio.h>
int main(){
    int a,b,rem,q;
    printf("Enter the number a : ");
    scanf("%d",&a);
    printf("Enter the number b : ");
    scanf("%d",&b);
    q = a/b;
    rem = a-(b*q);
    printf("The remainder of %d is divisible by %d  is : %d ",a,b,rem);
    return 0;
}