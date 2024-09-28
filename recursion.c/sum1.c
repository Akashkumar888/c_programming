#include<stdio.h>
int sum(int n){
    if(n==1 ){
        return 1;
    }
    else{
    return n+sum(n-1);
}
}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    int add=sum(n);
    printf("sum=%d\n",add);
    return 0;
}