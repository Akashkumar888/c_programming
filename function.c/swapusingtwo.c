#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the number a and b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
}