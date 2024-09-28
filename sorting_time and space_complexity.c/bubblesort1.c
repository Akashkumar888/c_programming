#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,4,2,5,3};
    int n=5;
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){ // pass 1
    bool flag=true;
        for(int j=0;j<n-1-i;j++){ //for swap
         if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=false;
         }
        }
        if(flag==true) break;
    }
    printf("\nsorted array : ");
    for(int i=0;i<n;i++){
         printf(" %d ",arr[i]);
        
    }
    return 0;
}