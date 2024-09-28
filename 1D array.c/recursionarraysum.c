#include<stdio.h>
int sum(int arr[],int n){
    if(n<=0) return 0;
    else{
      return  (sum(arr,n-1)+arr[n-1]);
    }
    }

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
   int k= sum(arr,n);
    printf(" %d ",k);
    return 0;
}