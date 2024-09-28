#include<stdio.h>
int factorial(int x){
int fact=1;
for(int i=2;i<=x;i++){
    fact=fact*i;
}
return fact;
}
int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    printf("Enter the number n and r:");
    scanf("%d%d",&n,&r);
    int ncr=combination(n,r);
    printf("%d\n",ncr);
    return 0;
}