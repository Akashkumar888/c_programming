#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number a :");
    scanf("%d",&a);
    printf("Enter the number b :");
    scanf("%d",&b);
    printf("Enter the number c :");
    scanf("%d",&c);
    int greatest=(a>b && a>c) ? a: (b>c ? b :c);
    printf("max=%d\n",greatest);
    return 0;
}