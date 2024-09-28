#include<stdio.h>
int factorial(int x){
int fact=1;
for(int i=2;i<=x;i++){
    fact=fact*i;
}
return fact;
}

int main(){
    int n,r;
    printf("Enter the number n and r:");
    scanf("%d%d",&n,&r);
    int npr=factorial(n)/factorial(n-r);
    printf("%d\n",npr);
    return 0;
}