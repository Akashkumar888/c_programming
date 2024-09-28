#include<stdio.h>
int power(int x,int y){
    int pow=1;
    for(int i=1;i<=y;i++){
        pow=pow*x;
    }
    return pow;
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