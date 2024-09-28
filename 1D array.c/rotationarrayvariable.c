#include<stdio.h>
void swapbetween(int arr[],int i,int j){
    int l=i;
    int m=j;
    while(l<m){
        int temp=arr[l];
        arr[l]=arr[m];
        arr[m]=temp;
        l++;
        m--;
    }
}
int main(){
   // int arr[7]={1,2,3,4,5,6,7};
   int n,k;
   printf("Enter the size of array : ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements of array : ");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("Enter rotation k :");
   scanf("%d",&k);
   if(k>n){
    k=k%n;
   }
    swapbetween(arr,0,n-1);
    swapbetween(arr,0,k-1);
    swapbetween(arr,k,n-1);
    for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
    }    
    return 0;
}