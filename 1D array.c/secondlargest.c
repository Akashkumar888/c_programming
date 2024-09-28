#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array :" );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    // int max=arr[0];
    // int smax=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(max!=arr[i] && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("second largest = %d\n",smax);
    return 0;
}