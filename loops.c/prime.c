#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1)printf("1 is neither prime or not composite");
   else if(a==0) printf("Number is prime");
          else  printf("Number is composite number :");
    return 0;
}