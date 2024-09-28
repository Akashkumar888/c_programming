#include<stdio.h>
void fibbonacci(int n){
    int sum,a=0,b=1;
for(int i=0;i<n;i++){
    printf("%d\t",a);
     sum=a+b;
    a=b;
    b=sum;
}
return;
}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    printf("The fibbonacci series :");
    fibbonacci(n);
    return 0;
}