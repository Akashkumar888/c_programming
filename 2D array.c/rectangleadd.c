#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the row of first matrix:");
    scanf("%d",&m);
    printf("Enter the column of first matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the first matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   int l1,r1,l2,r2;
   printf("Enter l1:");
   scanf("%d",&l1);
   printf("Enter r1:");
   scanf("%d",&r1);
   printf("Enter l2:");
   scanf("%d",&l2);
   printf("Enter r2:");
   scanf("%d",&r2);
int sum=0;
for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
       sum+=arr[i][j];
    }
}
printf("sum = %d",sum);
    return 0;
}