#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the row of first matrix:");
    scanf("%d",&m);
    printf("Enter the column of first matrix:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the first matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
int p;
    printf("Enter the row of second matrix:");
    scanf("%d",&n);
    printf("Enter the column of second matrix:");
    scanf("%d",&p);
    int brr[n][p];
    printf("Enter the second  matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[m][p];
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
             int sum=0;
            for(int k=0;k<n;k++){
               sum += arr[i][k]*brr[k][j];
            }
            crr[i][j]=sum;
            printf(" %d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}