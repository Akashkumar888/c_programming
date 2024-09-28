#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array :" );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    int count=0;
    printf("Enter x:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("count  = %d ",count);
    return 0;
}