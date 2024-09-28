#include<stdio.h>
   int binarySearch(int arr[],int data,int l,int r){
    while(l<=r){
        int mid=(l+r)/2;
        if(data == arr[mid]){
            return mid;
        }
        else if(data < arr[mid]){
            return binarySearch(arr,data,l,mid-1);
        }
        else {
            return binarySearch(arr,data,mid+1,r);
        }
    }
    return -1;
}
int main(void){
    int arr []={8,9,12,19,25,35,55,65,75,85,95};
    int n = sizeof(arr)/sizeof(int);
    int data;
    printf("\nEnter the value u want found:");
    scanf("%d",&data);
    int result = binarySearch(arr,data,0,n-1);
    if(result==-1){
        printf("Not found:");
    }
    else{
        printf("Element is found at index:%d",result);
    }
}