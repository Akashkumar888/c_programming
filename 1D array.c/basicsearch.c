#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the x:");
    scanf("%d",&x);
    //start se
    for(int i=0;i<n;i++){
        if(arr[i]==x){
          printf("Yes\n");
          printf("index is = %d",i);
          break;
        }
    }
    //last se 
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
          printf("\nYes\n");
          printf("index is = %d",i);
          break;
        }
    }
    return 0;
}