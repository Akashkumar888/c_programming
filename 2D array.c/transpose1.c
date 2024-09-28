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
    int brr[n][m];
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
            printf(" %d ",brr[i][j]);     
        }
        printf("\n");
    }
    return 0;
}