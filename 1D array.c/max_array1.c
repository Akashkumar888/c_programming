#include<stdio.h>
int main(){
    int n;
    int max;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array :" );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        max = (arr[i]>arr[j])?arr[i]:arr[j];
        }
    }
    printf("maximum=%d",max);
    return 0;
}