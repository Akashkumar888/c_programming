#include<stdio.h>
int main(){
    
    int n,rem,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
   while(n>0)
    {
        if(n%2!=0){
     rem=n%10;
     sum=sum+rem;
        }
        n=n/10;
    }
    printf("oddsum=%d\n",sum);
    return 0;
}