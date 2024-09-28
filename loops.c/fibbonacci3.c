#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a=1;
    int b=1,sum=1;
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    printf("%dth of fibonacci series is : %d\n",i,sum);
    }
    return 0;
}