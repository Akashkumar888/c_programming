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

    printf("\nAfter row rotation:");
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}