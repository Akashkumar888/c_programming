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
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    
    int ncr=nfact/(rfact*nrfact);
    printf("%d\n",ncr);
    return 0;
}