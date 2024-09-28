#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a=1;
    int b=1,sum;
    while(n>0){
        sum=a+b;
        a=b;
        b=sum;
        n--;
    }
    printf("%d ",sum);
    return 0;
}