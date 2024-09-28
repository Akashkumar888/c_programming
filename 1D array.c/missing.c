#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n-1];
    int sum1=0;
    int sum2=(n*(n+1))/2;
    printf("Enter the elements of array :");
     for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        sum1+=a[i];
    }
    printf("missing number = %d",sum2-sum1);
    return 0;
}