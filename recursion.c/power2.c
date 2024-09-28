#include<stdio.h>
int power(int x,int y){
    if(y==0){
        return 1;
    }
    return x * power(x,y-1);
}
int main(){
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    int p=power( a, b);
    printf("%d raised to the power %d is : %d\n",a,b,p);
    return 0;
}