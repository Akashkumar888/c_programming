#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows/column:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the  matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("After transpose:");
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter 90 degree rotation:");
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}