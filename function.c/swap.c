#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the number a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}