#include<stdio.h>
#include<limits.h>
int main(){
int arr[]={7,4,5,9,8,2,1};
int n=7;
printf("Unsorted array : ");
for(int i=0;i<n;i++){
printf(" %d ",arr[i]);
}


for(int i=1;i<=n-1;i++){
   int j=i;
   while(arr[j]<arr[j-1]  && j>=1){
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=temp;
    j--;
   }
}

printf("\nSorted array : ");
for(int i=0;i<n;i++){
printf(" %d ",arr[i]);
}
    return 0;
}