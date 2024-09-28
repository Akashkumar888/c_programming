#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    printf("Enter the element of array :" );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    printf(" %d " ,brr[i]);
    }
    // printf("\n");
    // for(int i=n-1;i>=0;i--){
    //     printf(" %d ",brr[i]);
    // }
    return 0;
}