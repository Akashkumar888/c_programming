#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the rows:");
    scanf("%d",&m);
    printf("Enter the column:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the  matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        if(i%2==0){ 
            for(int j=n-1;j>=0;j--){
                printf(" %d ",arr[i][j]);
            }
        }
        else{
        for(int j=0;j<n;j++){
        printf(" %d ",arr[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}