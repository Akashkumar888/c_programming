#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
    return n*factorial(n-1);
}
}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial=%d\n",fact);
    return 0;
}