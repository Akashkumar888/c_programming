#include<stdio.h>
int main(){
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
   int arr[n+1];
   printf("Enter the elements of array:");
   for(int i=0;i<n+1;i++){
   scanf("%d\n",&arr[i]);
   }
   int sum1=0;
   int sum2=(n*(n+1))/2;
    for(int i=0;i<n+1;i++){
    sum1+=arr[i];
   }
   printf(" duplicate : %d\n",sum1-sum2);
    return 0;
}