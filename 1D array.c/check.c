#include<stdio.h>
#include<stdbool.h>
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
     bool flag =0;          // number is not present in array
       int idx=0;                 //start se
    for( int i=0;i<n;i++){
        if(arr[i]==x){
          flag=1;
          idx=i;
          break;
        }
    }
    if(flag==0){
        printf("The number is not present in array");
    }
    else{
        printf("The number is present in array and its index is :%d",idx);
    }
    
    return 0;
}