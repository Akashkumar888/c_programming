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
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while(count<tne){
        for(int j=minc;j<=maxc;j++){
        printf(" %d ",arr[minr][j]);
        count++;
        }
        minr++;
        if(count>=tne) break;
        for(int i=minr;i<=maxr;i++){
            printf(" %d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        for(int j=maxc;j>=minc;j--){
            printf(" %d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        for(int i=maxr;i>=minr;i--){
            printf(" %d ",arr[i][minc]);
        }
        minc++;
        if(count>=tne) break;
    }
    return 0;
}