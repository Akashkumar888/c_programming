#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("sum=%d\n",s);
        return;
    }
    else{
        sum(n-1,s+n);
        return;
    }
}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}