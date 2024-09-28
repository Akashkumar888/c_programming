#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
   int arr[n];
    printf("Enter the elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i,j;
printf("Enter i :");
scanf("%d",&i);
printf("Enter j :");
scanf("%d",&j);
while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
    for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
    }    
    return 0;
}