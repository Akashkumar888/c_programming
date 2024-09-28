#include<stdio.h>
void pallindrome(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
        i++;
        j--;
        printf("Array is pallindrome\n");
        break;
        }
        else{
            printf("Array is not pallindrome\n");
            break;
        }
    }
    return ;
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array :" );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pallindrome(arr,n);
   // printf("Array is pallindrome");
    return 0;
}