#include<stdio.h>
int main(){
    int n;
    int pro=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array :" );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        pro*=arr[i];
    }
    printf("product=%d",pro);
    return 0;
}