// #include<stdio.h>
// int main(){
    
//     int n,sum=0;
//     printf("Enter the number :");
//     scanf("%d",&n);
//      for(int i=1;i<=n;i++){
//        if(i%2==0) sum=sum-i;
//        else sum=sum+i;
//      }
//     printf("sum = %d\n",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    
    int n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
     if(n%2==0)
        sum=-n/2;
     else sum=-n/2 +n;
    printf("sum = %d\n",sum);
    return 0;
}