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
   int arr[7]={1,2,3,4,5,6,7};
   int a,b;
   printf("Enter a:");
   scanf("%d",&a);
   printf("Enter b:");
   scanf("%d",&b);
   swapbetween(arr,a,b);
    for(int i=0;i<7;i++){
    printf(" %d ",arr[i]);
    }    
    return 0;
}