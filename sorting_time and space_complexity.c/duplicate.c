#include<stdio.h>
int main(){
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n+1];
    int count=0;
    printf("Enter the elements of array :");
    for(int i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n+1;j++){
        if(arr[i]==arr[j]){
            t=arr[j];
            count++;
            break;
        }
        }
    }
    printf("duplicate = %d\n",t);
    printf("count = %d",count);
    return 0;
}