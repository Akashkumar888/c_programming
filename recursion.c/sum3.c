#include<stdio.h>
int sum(int n){
    if(n==1 || n==0){
        return n;
    }
    else{
    return n+sum(n-1);
}
}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    int fact=sum(n);
    printf("sum=%d\n",fact);
    return 0;
}